/* Practice of pointers and pointer concepts*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age1 = 23;
    int age2 = 87;
    int *agePtr;

    agePtr = &age2;
    agePtr = &age1;

    *agePtr = 42; // changes value of variable pointer is pointing to

    age1 = 90;

    printf("%d is the value of age1\n", age1);

    printf("The value of agePtr is %p\n", agePtr); // address of pointer
    printf("What is my pointer agePtr pointing to? \n%d\n", *agePtr); // address pointer is pointing to

    printf("What is the value of &*agePtr:\n %p %d", &*agePtr, *&agePtr);

    return 0;
}
