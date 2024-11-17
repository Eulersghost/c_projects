#include <stdio.h>
#include <stdlib.h>

int main()
{
    // So according to uncle Google, the definition of an even number is that it has to go evenly divided into 2, while an odd number can't

    //declare types and variables
    int numb, even_check;

    //prompt the user
    printf("Please enter a number to check if it's even or odd: ");
    scanf("%i", &numb);

    //do the even check
    even_check = numb % 2;

    //now add the conditional
    if (even_check == 0) { //for this I had originally written it as even_check == 2 instead of 0 what's cool is that this works also for negative numbers
        printf("Your answer %i is even! \n", numb);
    }
    else {
        printf("Your answer %i is odd \n", numb);
    }
}
