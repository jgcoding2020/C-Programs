/* Practice writing functions with a few examples.
We want to write two functions that calculate the area and circumference of a circle
We also want to write a function that calculates x * 10 ^ n
We want to write a function that displays these results in a box
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159

// function prototypes

// function area of a circle
double area (double r);

// function circumference of a circle
double circum (double r);

// function to calculate x * 10 ^ n
double scale (double x, int N);

// function that displays given information in a box
void box (double value);

int main()
{
    double rad;
    printf("Please enter the radius of a circle you need calculations on: ");
    scanf("%lf", &rad);

    //double circle_area;
    //circle_area = area(rad); // function call, I make sure to store my results in a variable
    //printf("The area of the circle is : %6.2f", circle_area);
    box(area(rad)); // function box does not have an output, does not need a storage variable, because it's a type void

    double circle_circum;
    circle_circum = circum(rad); // function call to circum
    printf("The circle with the circumference with radius = %4.1f is %6.2f\n", rad, circum(rad));
    box(circum(rad));

    double x;
    int N;
    printf("User, enter two values a real number and an integer to calculate x*10^N > ");
    scanf("%lf%d", &x, &N);


    double result_scale;
    result_scale = scale (x, N); // function call to bring the function to life
    //printf("The result of scaling values %.2f and %d is %.3E", x, N, result_scale);
    box(scale(x, N));

    return 0;
}

double area (double r)
{
    double result; // would be a local variable
    result = PI * r * r;
    return (result);
}

double circum (double r)
{
    return (2 * PI * r);
}

double scale (double x, int N)
{
    return (x * pow(10, N));
}

void box (double value)
{
    printf("************************\n");
    printf("*                      *\n");
    printf("*   %10.2f         *\n", value);
    printf("*                      *\n");
    printf("************************\n");
}
