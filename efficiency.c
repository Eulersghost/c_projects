#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 int base, r1, r2, r3, r4, efficient_math, x2, x4, x6, x8;

 //grab the input
 printf("Please enter the base number you want to use for this calculation: ");
 scanf("%d", &base);

 //first do the efficient math first
 efficient_math = pow(base, 20);   //the reason for this is because since we're doing multiple calculations of exponents with the same base, we can add up all the exponents 2+4+6+8 = 20 hence, exponent of 20.

 //long way first
 r1 = pow(base, 2.0);
 r2 = pow(base, 4.0);
 r3 = pow(base, 6.0);
 r4 = pow(base, 8.0);

 //answer from class
 x2 = base * base;
 x4 = x2 * x2;
 x6 = x4 * x2;
 x8 = x4 * x4;


 printf("My way of doing this is done with base %0.1d is: %0.1d\n", base, efficient_math);
 printf("Your answer using the long way of base %0.1d is: %0.1d, %0.1d, %0.1d, and %0.1d.  If you add all of them together you get: %0.1d.\n", base, r1, r2, r3, r4, r1+r2+r3+r4);
 printf("The answer given in the exercise is as follows for base %0.1d: %0.1d, %0.1d, %0.1d, and %0.1d\n", base, x2, x4, x6, x8);
}
