#include <stdio.h>
#include <stdlib.h>

void ph_levels (double ph);

int main()
{
    double ph_read;

    printf("\nPlease enter the ph level to find out the acidic/ alkaline balance: \n");
    scanf("%lf", &ph_read);

    ph_levels(ph_read);

    return 0;
}

void ph_levels (double ph)
{
    if (ph >= 12)
        printf("\nvery alkaline\n");
    else if (ph < 12 && ph > 7)
        printf("\nalkaline\n");
    else if (ph == 7)
        printf("\nneutral\n");
    else if (ph < 7 && ph > 2)
        printf("\nacidic\n");
    else
        printf("\nvery acidic\n");

}
