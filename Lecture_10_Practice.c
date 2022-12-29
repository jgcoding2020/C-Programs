/* Practice of the repititiona while loop */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int weeks, labs, quizzes, assignments;
    weeks = 1;
    quizzes = 0;
    labs = 0;
    assignments= 0;


    while (weeks < 12)
    {
        if (weeks % 2 == 0)
        {
            quizzes += 1;
            assignments += 1;
        }
        labs += 1;
        weeks += 1;
    }

    printf("\nNow is time for your final exam.\n");
    printf("\ntotal quizzes: %d total labs: %d total assignments: %d\n", quizzes, labs, assignments);

    return 0;
}
