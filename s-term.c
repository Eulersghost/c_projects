
#include <stdio.h>

int main(){
    //Mission is to find the nth term  
    /*
     * 1. Prompt the user for the nth term they are trying to find: 
     */
    float term, first_term, a_n_term;
    int math;

    printf("Enter the n-th term you want to calculate ");
    scanf("%f", &term);

    printf("What is the first term you want to start with? ");
    scanf("%f", &first_term);

    //printf("What is the value of d? ");
    //scanf("%f", &diff);
    
    printf("What is the last nth term? ");
    scanf("%f", &a_n_term);

    //Do the math
    math = (first_term + a_n_term) * term/2;

    printf("Your answer is: %i\n", math);
}
