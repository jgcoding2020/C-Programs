/* Learning to write void functions
date 6/9/2020 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// function prototypes
void butler(void);
void chief(void);

int main()
{
    // Let's call our function
    // function call
    butler ();
    printf("\nButler, take me to the beach. It is a warm day.\n");

    printf("\nWhere is my butler?\n\nI want to go home!\n");
    butler ();

    // calling my chief
    chief();
    printf("\nI would like some pizza for tonight.\n");

    chief();
    printf("\nNow, bring me some chocolate cake!\n");

    // using library functions now
    int x;
    x = 32;
    double y;
    y = sqrt(x);

    printf("%f", y);

    printf("x to the power of 10 is %0.1E.", pow(x,10));

}

// function definitions
void butler(void)
{
    printf("\nHello, how can I help you today?\n");
}

void chief(void)
{
    printf("\nHello sir, I'm ready to take your order.\n");
}
