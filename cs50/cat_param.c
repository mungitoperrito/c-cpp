#include <cs50.h>
#include <stdio.h>

#define NUM_REPETITIONS 3

void meow(int); /* Function prototypes */

int main() /* main() first for style */
{
    meow(NUM_REPETITIONS);

    return 0;
}

void meow(int repetitions) /* Function definitions */
{
    int i;

    for (i = 0; i < repetitions; i++)
    {
        printf("meow\n");
    }
}
