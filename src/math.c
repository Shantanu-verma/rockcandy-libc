typedef unsigned int uint32_t

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

  
