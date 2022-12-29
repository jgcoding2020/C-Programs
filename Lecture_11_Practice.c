/* we are going to create a user passcode. The user gets 5 chances before getting locked out.
Practice of loops.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int passcode;
    passcode = 9260;
    int user_pass;
    int counter = 0;

    do {
        printf("\nUser, please enter the passcode: \n");
        scanf("\n%d", &user_pass);
        counter++;
        if (user_pass != passcode)
            printf("\nWrong passcode, you have %d remaining attempts\n", 5-counter);
    }   while (user_pass != passcode && counter < 5);


    if (counter == 5)
        printf("\nSorry, you didn't enter the right passcode.\n");
    else
        printf("\nYou entered the correct passcode. Welcome, have fun!!!\n");

    return 0;
}
