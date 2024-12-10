#include <stdio.h>
#include <stdlib.h>

int main () {

//set the data types 
int date, month, year;

//prompt the user for some input
printf("Please enter a day: \n");
scanf("%d", &date);

printf("Please enter a month: \n");
scanf("%d",&month);

printf("Please enter a year: \n");
scanf("%d",&year);

/*There are several cases of having to build this where I will have to set up the month cycle
After that the days will have to be calculated based on the year, and also what months are entered.  If it's a leap year you add an extra day to February. 
*/
    
//months that have 31 days
/*January, March, May, July, August, October, and December*/

//months that have 30 days
/*April, June, September, and November*/

/*---------------------------------------------------------------------------------------------------------------------*/

// write a mechanism for the 30, 31, and 28 day cycles
if (date >= 1 && date < 30)
    printf("%d/%d/%d", date + 1, month, year);
else if (date >= 1 && date < 31)
    printf("%d/%d/%d", date + 1, month, year);
else if (date >= 1 && date < 28)
    printf("%d/%d/%d", date + 1, month, year);

// write a mechanism for the start of the new year
else if (month == 12 && date == 31)
    printf("%d/%d/%d", 32 - date, 13 - month, year + 1);

// write a mechanism for the 28, 30, and 31 month transitions
else if (date == 28 && month == 2)
    printf("%d/%d/%d", 27 - date, month + 1, year); // built for February
else if ((date == 30 && month == 4) && (date == 30 && month == 6) && (date == 30 && month == 9) && (date == 30 && month == 11))
    printf("%d/%d/%d", 31 - date, month + 1, year); // built for 30 day cycles
else if ((date == 31 && month == 1) && (date == 31 && month == 3) && (date == 31 && month == 7) && (date == 31 && month == 8) && (date == 31 && month == 10))
    printf("%d/%d/%d", 32 - date, month + 1, year); // built for 31 day cycles
/* else if ((date > 30 && month == 4) || (date > 30 && month == 6)|| (date > 30 && month == 9)|| (date > 30 && month == 11))
    printf("%d/%d/%d", )
*/
else if ((year % 400 == 0) || (year % 100 == 0) || (year % 4 == 0)) //leap year block, basically almost all of it was copied from the last section
    if (month == 2 && date == 28)
        printf("%d/%d/%d", date + 1, month, year);
    else if ((date == 30 && month == 4) && (date == 30 && month == 6) && (date == 30 && month == 9) && (date == 30 && month == 11))
        printf("%d/%d/%d", 31 - date, month + 1, year); // built for 30 day cycles
    else if ((date == 31 && month == 1) && (date == 31 && month == 3) && (date == 31 && month == 7) && (date == 31 && month == 8) && (date == 31 && month == 10))
        printf("%d/%d/%d", 32 - date, month + 1, year); // built for 31 day cycles

    // write a mechanism for the 30, 31, and 28 day cycles
    else if (date >= 1 && date < 30)
        printf("%d/%d/%d", date + 1, month, year);
    else if (date >= 1 && date < 31)
        printf("%d/%d/%d", date + 1, month, year);
    else if (date >= 1 && date < 28)
        printf("%d/%d/%d", date + 1, month, year);

    // write a mechanism for the start of the new year
    else if (month == 12 && date == 31)
        printf("%d/%d/%d", 32 - date, 13 - month, year + 1);
    else
        printf("Please try again");
else
    printf("Please try again");
}