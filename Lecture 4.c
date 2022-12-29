/* Lecture 4: Practice of printf, arithmatic, and type casting
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int st1_grade = 65;
    int st2_grade = 91;

    char st1 = 'A';
    char st2 = 'Z';

    double average;

    // create calculation for average

    average = (double)(st1_grade + st2_grade)/2;

    printf("\a\nStudent %c and student %c have an average grade of \n\n%f\n", st1, st2, average);

    return 0;
}
