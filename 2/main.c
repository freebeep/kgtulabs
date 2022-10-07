/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>
#include <fenv.h>

double skalmult(double *multa,double *multb, int size)
{
    double smult = 0;
    for (int i = 0; i < size; i++)
    {
        
        smult += multa[i] * multb[i];

    }
    return smult;
}


int main()
{
double a[100], b[100];
double c[100], d[100];
double n,sum;
int i;
/* set up vectors */


n = 5;
for(i = 0; i < n; i++)
{
    a[i] = rand() % 100;
    b[i] = rand() % 100;
    
}

for (i = 0; i < n; i++)
{
    if(i % 2 == 0)
    {
        a[i] = 0;
    }
}
/* adding two vectors */
 for (i = 0; i < n; i++)
 {
    c[i] = a[i] + b[i];
    d[i] = a[i] - b[i];
 }
printf("Result: a            b          +           -         \n");
 for (i = 0; i < n; i++)
    printf("%10e  %10e %10e %10e\n", a[i] , b[i] , c[i] , d[i]);
    sum = skalmult(a,b,n);
    printf("%e\n ", sum);
    
return 0;
}