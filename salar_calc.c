#include <stdio.h>

int main(){

    //determine the type of file types that I need to define

    float salary, hours;

    //prompt the user
    printf("Please enter your salary per hour: \n");
    scanf("%f", &salary);

    //grab the totals hours worked
    printf("What is the total hours that you worked: \n");
    scanf("%f", &hours);

    float math = salary * hours; 

    //print the results
    printf("The total paycheck you should be expecting is: $%.2f \n", math);
}
