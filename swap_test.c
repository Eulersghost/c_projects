#include <stdio.h>

int main (){

//    int test1;

//    printf("Print your integer ");
//    scanf("%i", &test1);
//    printf("%lf\n", (double)test1);

float a = 1.26, b = 2.5;
float c; 

//print the results before the swap
printf("The results are as follows: a = %f, b = %f\n", a, b);

//a = c; //this is where I got it wrong 
c = a;
a = b;
b = c; //I got my logic wrong but it was very close.

//print the results
printf("a = %f, b = %f\n", a, b);


//    return 0;
    //    oh he wants me to do the two floating point numbers where a=b b=c and a=c? 
}
