#include <stdio.h>
#include <stdlib.h>

const int NUM_VALUES = 5;

int main(void)
{
    int i;
    int multiples[NUM_VALUES];

    for (i = 0; i < NUM_VALUES; i++)
    {
        multiples[i] = 2 * (i + 1);
    }

    for (i = 0; i < NUM_VALUES; i++)
    {
        printf("%d ", multiples[i]);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
