
#include <stdio.h>
#include <stdlib.h>

int main () {

//build it so that way you grab three use inputs, of type integer.
int u_1, u_2, u_3, result_1, result_2, result_3;

//prompt the user 
printf("Please enter three numbers below: \n");
scanf("%d%d%d", &u_1, &u_2, &u_3);

//error correct for division by zero
if (u_1 == 0 || u_2 == 0 || u_3 == 0)
    printf("Cannot divide by zero");
//build the conditional statement, it's rather long
else if ((u_1 % u_2 == 0 || u_2 % u_1 == 0) && (u_2 % u_3 == 0 || u_3 % u_2 == 0) && (u_1 % u_3 == 0 || u_3 % u_1 == 0))
    printf("Divisible \n");
else
    printf("Not divisible \n");
}