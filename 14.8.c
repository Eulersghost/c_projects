#include <stdio.h>
#include <stdlib.h>

int main (){

    /*Need to satisfy three conditions first off define the data types and scan the input*/
    int user_input;
    printf("Please enter the year you want to find: \n");
    scanf("%d", &user_input);

    // satisfy the first condition: if year is divided by 4 with no remainder then it's not a new year
    // satisfy the second condition:  if the year is divided by 100 and no remainder then it's not a new year
    // satify the third condition: if the year is divided by 400 then it's a leap year
    if ((user_input % 4 == 0 && user_input == 0) || (user_input % 400 == 0))
        printf("%d is a leapyear \n", user_input);
    else
        printf("%d is not a leapyear \n", user_input);
}

