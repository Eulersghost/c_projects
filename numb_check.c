#include <stdio.h>
#include <stdlib.h> 

int main () {
    //define the data types 
    int u_input1, u_input2;

    //prompt the user input and then save them to variables
    printf ("Please enter a number: ");
    scanf("%d", &u_input1);

    printf("Please enter a second number: ");
    scanf("%d", &u_input2);

    //now do the logic for it
    if (u_input1 == u_input2)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
     
    
}