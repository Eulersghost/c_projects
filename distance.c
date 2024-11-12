#include <stdio.h>

int main(){

    //grab user inputs 
    int rate, distance;

    printf("What is the total distance you're going in miles? \n");
    scanf("%i", &distance);

    printf("What is the rate you're going in miles per hour? \n");
    scanf("%i", &rate);

    float time_math = distance/rate;

    //do the math
    printf("It will take you a total time of: %f\n hour", time_math);
}
