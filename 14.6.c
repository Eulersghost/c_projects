//this is the seconds assignment need to do the following calculations

#include <stdio.h>
#include <stdlib.h>

int main (){

int input1, seconds_convert, minutes_convert, hours_convert;

    //prompt the user for the inputs to be entered
    printf("Please enter enter the total number of seconds you want to convert \n");
    scanf("%d", &input1);

    // do the math
    // convert seconds to hours
    hours_convert = (input1 / 3600);
    // convert seconds to minutes
    minutes_convert = (input1 - hours_convert * 3600) / 60; 
    // figure out the remaining seconds
    seconds_convert = (input1 - hours_convert * 3600) % 60;

    // this is an added part from the lesson he wanted to make sure that if any results are greater then zero print it in a certain format.
    if (hours_convert < 10)
        printf("0");
        printf("%d : ", hours_convert);
    if (minutes_convert < 10)
        printf("0");
        printf("%d : ", minutes_convert);
    if (seconds_convert < 10)
        printf("0");
        printf("%d\n", seconds_convert);
/*     //now display the results
    printf("The current time is %.1d:%.1d:%.1d \n", hours_convert, minutes_convert, seconds_convert); */
}