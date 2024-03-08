#include<stdio.h>
#include<complex.h>

int main()
{
    #ifdef __STDC_NO_COMPLEX__
        printf("Complex numbers aren't supported");
        exit(0);
    #else
    printf("Complex numbers are supported\n");
    double complex a = 3.5 + 3*I;//this declaration is avaiable in C 
    double complex b = 3.4 + 4*I;
    double complex c = 3.0 + 3.2*I;
    double complex sum = a+b;
    double complex product = a*b;
    double complex pwr = cpow(a, c);
    double complex conjugate = conj(a);
    printf("a is %0.2f + %0.2fi\n", creal(a), cimag(b));
    printf("b is %0.2f + %0.2fi\n", creal(b), cimag(b));
    printf("sum is %0.2f + %0.2fi\n", creal(sum), cimag(sum));
    printf("product is %0.2f + %0.2fi\n", creal(product), cimag(product));
    printf("power is %0.2f + %0.2fi\n", creal(pwr), cimag(pwr)); 
    printf("conjugation of a is %0.2f + %0.2fi", creal(conjugate), cimag(conjugate));
    #endif
}