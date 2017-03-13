typedef unsigned int uint32_t
#include "math.h"

// Minimum cycles
long long abs(long long value){
  uint32_t _temp = value >> 31;  
  value ^= _temp;           
  value += _temp & 1; 
  return value;
  }
  
// floor
double floor(double num){
  double exp = num - (long)num;
  return ( num - exp );
}

// ceil
double ceil(double num){
  double exp = num - (long)num;
  return ( num + ( 1 - exp ));
}

// I think its not very fast
// O(log(exp)) Complexity
double pow(double base,double exp) {
    if( exp == 0)
       return 1;
    float temp = power(base, exp/2);       
    if (exp % 2 == 0)
        return temp*temp;
    else {
        if(exp > 0)
            return base*temp*temp;
        else
            return (temp*temp)/base; //negative exponent computation 
    }
} 

// Sqrt faster
double sqrt(double x){
  unsigned int i = *(unsigned int*) &x;
  i  += 127 << 23;
  i >>= 1;
  return *(float*) &i;
}

  
