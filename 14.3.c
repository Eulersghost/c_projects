/*Absolute Value practice program
Written by Jason Learner
On 12/1/24
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (){
    /*I think that in order to work on this I need to make sure that this is something that reads and stores the values in a variable and then calls is up in a conditional*/
    int numb1, result;
    //  char positive = '+';

    // prompt the user for each value
    printf("Please enter your number below: ");
    scanf("%d", &numb1);

    result = abs(numb1);
    printf("Your result is %d\n", result);
    
}