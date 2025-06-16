#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_QUIZES 5

/* PROTOTYPES */
void no_arrays(void);
void use_arrays(void);

/* MAIN */
int main(void)
{

    time_t rand_seed = time(NULL); // Second since epoch as random number seed
    srand(rand_seed);              // Initialize rand

    no_arrays();
    printf("\n");
    use_arrays();

    return EXIT_SUCCESS;
}

void no_arrays(void)
{
    /* Uses explicitly named variables instead of an array to hold scores */

    int quiz1, quiz2, quiz3, quiz4;
    float average_score;

    quiz1 = rand() % 100 + 1; // Values from 1 to 100
    quiz2 = rand() % 100 + 1;
    quiz3 = rand() % 100 + 1;
    quiz4 = rand() % 100 + 1;

    average_score = (quiz1 + quiz2 + quiz3 + quiz4) / 4;

    printf("Scores: %d, %d, %d, %d\n", quiz1, quiz2, quiz3, quiz4);
    printf("Average: %3.2f\n", average_score);
}

void use_arrays(void)
{
    float average_score;
    int scores[NUM_QUIZES] = {0}; // Initialize to 0s
    int total = 0;
    int i;

    for (i = 0; i < NUM_QUIZES; i++)
    {
        scores[i] = rand() % 100 + 1;
    }

    for (i = 0; i < NUM_QUIZES; i++)
    {
        total += scores[i];
    }

    printf("Scores: ");
    for (i = 0; i < NUM_QUIZES; i++)
    {
        printf("%d", scores[i]);
        if (i < NUM_QUIZES - 1)
        {
            printf(", ");
        }
        else
        {
            printf("\n");
        }
    }

    printf("Average: %3.2f\n", (float) total / NUM_QUIZES);
}
