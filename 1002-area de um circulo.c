/* Calculo area circulo */
#include<stdio.h>
#include <math.h>
int main()
{
    double R, n, A, pot;
    scanf("%lf", &R);
    n=3.14159;
    pot= pow(R, 2);
    A= pot*n;
    printf ("A=%.4lf\n", A);
    
    return 0;
} 
