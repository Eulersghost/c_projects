#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

// define the variables to use in the calculation

double xp1, xp2, yp1, yp2, distance_math;

//prompt the user for four coordinates
printf("Please enter two coordinates for your first point: ");
scanf("%lf", &xp1);
scanf("%lf", &yp1);

printf("Please enter two coordinate for your second point: ");
scanf("%lf", &xp2);
scanf("%lf", &yp2);

//now do the math
distance_math =sqrt(((xp1-xp2)*(xp1-xp2))+((yp1-yp2)*(yp1-yp2)));

//print the result
printf("The final distance of the coordinates (%.2lf, %.2lf) and (%.2lf, %.2lf) are %.2lf", xp1, yp1, xp2, yp2, distance_math);

}
