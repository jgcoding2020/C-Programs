/* Lecture 5 practice */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14
int main()
{
    double radius;
    char name;

    double area, circum;

    printf("\nHello user, please enter the radius of a circle you wish calculations to be performed on: \n");
    scanf("\n%lf", &radius);

    printf("\nThe radius is : %f\n", radius);
    printf("\nEnter the name of the circle using one letter: \n");
    scanf(" %c", &name);
    printf("\nOk, your circle is called: %c\n", name);

    area = PI * radius * radius;
    circum = 2 * PI * radius;

    printf("\nThe radius of your circle with %0.2f has an area of %.3f, and the circumference is %0.3f.\n", radius, area, circum);


}
