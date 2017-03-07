#ifndef size_t
typedef unsigned int size_t;
#endif
#ifndef wchar_t
typedef short wchar_t; // Is this correct?
#endif
// TODO: div_t
// TODO: ldiv_t

#ifndef NULL
#define NULL 0
#endif
#ifndef EXIT_FAILURE
#define EXIT_FAILURE 1
#endif
#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS 0
#endif
#ifndef RAND_MAX
#define RAND_MAX 18446744073709551615
#endif
// TODO: MB_CUR_MAX

#ifndef _STDLIB_H
#define _STDLIB_H
double atof(const char *str);
int atoi(const char *str);
long int atol(const char *str);
double strtod(const char *str, char **endptr);
long int strtol(const char *str, char **endptr, int base);
unsigned long int strtoul(const char *str, char **endptr, int base);
void *calloc(size_t nitems, size_t size);
void free(void *ptr);
void *malloc(size_t size);
void *realloc(void *ptr, size_t size);
void abort(void);
int atexit(void (*func)(void));
void exit(int status);
char *getenv(const char *name);
int system(const char *string);
void *bsearch(const void *key, const void *base, size_t nitems, size_t size, int (*compar)(const void *, const void *)); // Woah
void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void *));
int abs(int x);
div_t div(int numer, int denom);
long int labs(long int x);
ldiv_t ldiv(long int numer, long int denom);
int rand(void);
void srand(unsigned int seed);
int mblen(const char *str, size_t n);
size_t mbstowcs(schar_t *pwcs, const char *str, size_t n);
int mbtosc(wchar_t *pwc, const char *str, size_t n);
size_t wcstombs(char *str, const wchar_t *pwcs, size_t n);
int wctomb(char *str, wchar_t wchar);
#endif _STDLIB_H
