#include <stdio.h>
#include <stdlib.h>

int main()
{
/*This is a bit of a hard project to code because the conversions are going to be tricky. */

//1. Declare and save the variables
int user_data, hours_convert, minutes_convert, remain_seconds;

//2. Prompt user for total number of seconds
printf("What is the total amount of seconds you want to calculate: \n");
scanf("%i", &user_data);


//3. Do the math for hours, save result
hours_convert = user_data / 3600;

//4. Do the math for minutes, save result
//minutes_convert = (user_data-3600)/ 60; //this is my original calculations
minutes_convert = (user_data - hours_convert * 3600 /* is this to convert it back to seconds again? */) / 60;

//5. Take care of any remainder seconds, save result
// remain_seconds = user_data % 60; this is my original calculation

remain_seconds = (user_data - hours_convert * 3600) % 60; //with the value I think we have to use that variable to make sure the calculation doesn't break apart later on.

//6. Combine values into final prompt
printf("The total converted time will be: %.2i: %.2i : %.2i remaining \n", hours_convert, minutes_convert, remain_seconds);
return 0;


}
