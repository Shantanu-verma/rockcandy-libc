// Note from cbpudding: Use long doubles please!
// TODO: acos
// TODO: asin
// TODO: atan
// TODO: atan2
// TODO: cos
// TODO: cosh
// TODO: sin
// TODO: sinh
// TODO: tanh
// TODO: exp
// TODO: frexp
// TODO: ldexp
// TODO: log
// TODO: log10
// TODO: modf

long double pow(long double base, long double exp) {
    if( exp == 0)
       return 1;
    long double temp = power(base, exp/2);       
    if (exp % 2 == 0)
        return temp*temp;
    else {
        if(exp > 0)
            return base*temp*temp;
        else
            return (temp*temp)/base; //negative exponent computation 
    }
}

long double sqrt(long double x){
  unsigned long long i = *(unsigned int*) &x;
  i  += 127 << 23;
  i >>= 1;
  return *(long double*) &i;
}

long double ceil(long double num){
  long double exp = num - (long long)num;
  return ( num + ( 1 - exp ));
}

// TODO: fabs

long long abs(long long value){
  return value & 0x7FFFFFFFFFFFFFFF;
}

long double floor(long double num){
  long double exp = num - (long long)num;
  return ( num - exp );
}

// TODO: fmod