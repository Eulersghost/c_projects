#include <stdio.h>

int main(){
    //Mission is to find the nth term  
    /*
     * 1. Prompt the user for the nth term they are trying to find: 
     */
    int term, diff, first_term;
    long int math;

    printf("Enter the n-th term you want to calculate ");
    scanf("%i", &term);

    printf("What is the first term you want to start with? ");
    scanf("%i", &first_term);

    printf("What is the value of d? ");
    scanf("%i", &diff);

    //Do the math
    math = (term - 1) * diff + first_term;

    printf("Your answer is: %li\n", math);
}
