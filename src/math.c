typedef unsigned int uint32_t

#define M_E		2.7182818284590452354
#define M_LOG2E		1.4426950408889634074
#define M_LOG10E	0.43429448190325182765
#define M_LN2		0.69314718055994530942
#define M_LN10		2.30258509299404568402
#define M_PI		3.14159265358979323846
#define M_PI_2		1.57079632679489661923
#define M_PI_4		0.78539816339744830962
#define M_1_PI		0.31830988618379067154
#define M_2_PI		0.63661977236758134308
#define M_2_SQRTPI	1.12837916709551257390
#define M_SQRT2		1.41421356237309504880
#define M_SQRT1_2	0.70710678118654752440

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
double pow(double p, unsigned q){
   double answer = 1;
   uint32_t it = 0;
   while(++it <= q)
     answer*=p;
   return answer;
}

// Sqrt faster
double sqrt(double x){
  unsigned int i = *(unsigned int*) &x;
  i  += 127 << 23;
  i >>= 1;
  return *(float*) &i;
}

  
