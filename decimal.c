#include <stdio.h>
#include <stdlib.h>

int main()
{
  //define data types and set them so that way they can receive user input

   int convert_calc;
   double final_result;
   float user_input;


  //prompt the user for the values
  printf("Please enter the number you want to capture the decimal parts for: ");
  scanf("%f", &user_input);

  convert_calc = user_input * 1;

  final_result = (convert_calc - user_input) * -1;

  /**
   *
   *
   *  int convert_calc = user_input;

  //math
  final_result = user_input - convert_calc;

  //print the results
  printf("The final result is: %lf %lf %i", final_result, convert_calc, user_input);
   *
   *
   */

  //print the results
  printf("The final result is: %lf \n", final_result);
}
