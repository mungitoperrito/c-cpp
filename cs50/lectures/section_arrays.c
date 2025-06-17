#include <stdio.h>
#include <stdlib.h>

const int NUM_VALUES = 5;

int main(void)
{
    int i;
    int multiples[NUM_VALUES];

    // Double new assignment
    for (i = 0; i < NUM_VALUES; i++)
    {
        multiples[i] = 2 * (i + 1);
    }

    for (i = 0; i < NUM_VALUES; i++)
    {
        printf("%d ", multiples[i]);
    }
    printf("\n");

    // Double prior value
    multiples[0] = 1;  //Base case

    for (i = 1; i < NUM_VALUES; i++)
    {
        multiples[i] = 2 * multiples[i-1];
    }

    for (i = 0; i < NUM_VALUES; i++)
    {
        printf("%d ", multiples[i]);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
