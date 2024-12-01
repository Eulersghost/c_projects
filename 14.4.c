/*x,y coordinate program
Written by Jason Learner
On 12/1/24
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (){
//so need to set up the input so that way it takes a coordinate input 
int x_coordinate, y_coordinate;

//prompt the user
printf("Enter your x-coordinate: ");
scanf("%d", &x_coordinate);


printf("Enter your y-coordinate: ");
scanf("%d", &y_coordinate);

//printf("Your coordinates are (%d, %d)\n", x_coordinate, y_coordinate);

if (x_coordinate > 0 && y_coordinate > 0)
{
    printf("Your coordinates (%d, %d) are in the 1st Quadrant\n", x_coordinate, y_coordinate);
}
else if (x_coordinate < 0 && y_coordinate > 0)
{
    printf("Your coordinates (%d, %d) are in the 2nd Quadrant\n", x_coordinate, y_coordinate);
}
else if (x_coordinate < 0 && y_coordinate < 0)
{
    printf("Your coordinates (%d, %d) are in the 3rd Quadrant\n", x_coordinate, y_coordinate);
}
else if (x_coordinate > 0 && y_coordinate < 0)
{
    printf("Your coordinates (%d, %d) are in the 4th Quadrant\n", x_coordinate, y_coordinate);
}
else if (x_coordinate == 0 || y_coordinate == 0)
{
    printf("The coordinates (%d, %d) aren't in any quadrant but are on one of the number lines\n", x_coordinate, y_coordinate);
}
else
{
    printf("Please try again!\n");
}
}