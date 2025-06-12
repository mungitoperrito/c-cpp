#include <cs50.h>
#include <stdio.h>

#define REPETITIONS 3

void meow(void);   /* Function prototypes */

int main()         /* main() first for style */
{
    int i;

    for (i=0; i < REPETITIONS ; i++)
    {
        meow();
    }

    return 0;
}

void meow(void)     /* Function definitions */
{
    printf("meow\n");
}
