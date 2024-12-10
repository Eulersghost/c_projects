#include <stdio.h>
#include <stdlib.h>

int main(){

    //find the next day define the data points 
    int day, month, year;
    int leapYear = 0; //this part was one that he added and did differently

    printf("Please enter a date (using only numbers) to calculate the date: \n");
    scanf("%d",&day);
    scanf("%d",&month);
    scanf("%d",&year);

//build the logic for the year
if (month == 2)
    if (year % 4 == 0 && (year % 100 !=0 ||  year % 400 == 0))
        leapYear = 1;
day += 1; // he adds the extra day to the conditional of the leap year

//going to use switch case 
switch (month)
{
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (day <= 31)
            break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (day <= 30)
            break;
    case 2: //Feb
        if (day <= 29 && leapYear == 1)
            break;
        else if (day <= 28)
            break;
    default:
        day = 1;
        month += 1; //add a new month to the old one
        if (month > 12)
        {
            month = 1;
            year += 1; // add to the new year
        }
}
printf("The next day would be: %d / %d / %d\n", day, month, year);

return 0;
}