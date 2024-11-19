#include <stdio.h>
#include <stdlib.h>

int main()
{
   //peramiters of the exercise are to use a conditional to check that two inputs are either greater than or less than to each other.  Define the int types

   float num1, num2;

   //prompt the user to enter there numbers
   printf("Enter the numbers that you want to compare: ");
   scanf("%f",&num1);
   scanf("%f",&num2);

   //now compare the two
   if (num1 > num2)
   {
       printf("MAXIMUM = %f \n", num1);
       printf("MINIMUM = %f \n", num2);
   }
   else
   {
        printf("MAXIMUM = %f \n", num2);
       printf("MINIMUM = %f \n", num1);
   }
}
