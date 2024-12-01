#include <stdio.h>
#include <stdlib.h>

int main (){
    /*I think that in order to work on this I need to make sure that this is something that reads and stores the values in a variable and then calls is up in a conditional*/
   int numb1; 
    
    //prompt the user for each value
    printf("Please enter your number below: ");
    scanf("%d", &numb1);

    //now I need to define the logic
    if (numb1 >= 0 && numb1 <= 9)
    {
        printf("single-digit\n");
    }
    else if (numb1 >= 10 && numb1 <= 99)
    {
        printf("double-digit\n");
    }
    else if (numb1 >= 100 && numb1 <= 999)
    {
        printf("triple-digit\n");
    }
    else if (numb1 < 0 || numb1 > 999)
    {
        printf("neither a double/triple digit\n");
    }
    else
    {
        printf("please try again\n");
    }
}