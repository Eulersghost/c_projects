#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

//define data types
int num1, num2, num3;
char operation;

/* Ok so I need to do two things grab two input variables and a character to do the operation*/

printf("Enter the operation you want to do +, -, /, *, or (r) for remainder : \n");
scanf("%c", &operation);

printf("Enter the two numbers you want to calculate: \n");
scanf("%d", &num1);
scanf("%d", &num2);

//now build the switch case logic

switch (operation)
{
   case '+':
       num3 = num1 + num2;
       printf("%d + %d = %d", num1, num2, num3);
       break;
   case '-':
        num3 = num1 - num2;
        printf("%d - %d = %d", num1, num2, num3);
        break;
   case '/':
       // this part below was added from the class
        if (num2 == 0)
            printf("Cannot divide by zero \n");
        //above
        else
            //num3 = num1 / num2; see remainder section also
            printf("%d / %d = %d", num1, num2, num1/num2);
        break;
   case '*':
        num3 = num1 * num2;
        printf( "%d * %d = %d", num1, num2, num3);
        break;
   case 'r': // I forgot to include this part of the calculator also.
        if (num2 == 0)
            printf("Cannot divide by zero \n");
        else
            //num3 = num1 % num2;
            printf("%d / %d,  r = %d", num1, num2, num1%num2 /* I cannot put num3 in this result because it gives me some weird output so I'm just following partly with the solution and using the expressions*/);
        break;
   default:
        printf("Please try again! \n");
        break;
}

}
