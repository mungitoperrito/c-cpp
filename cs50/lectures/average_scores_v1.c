#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void)
{

    time_t rand_seed = time(NULL); // Second since epoch as random number seed
    int quiz1, quiz2, quiz3, quiz4;
    float average_score;

    srand(rand_seed);

    // No arrays
    quiz1 = rand() % 100 + 1; // Values from 1 to 100
    quiz2 = rand() % 100 + 1;
    quiz3 = rand() % 100 + 1;
    quiz4 = rand() % 100 + 1;

    average_score = (quiz1 + quiz2 + quiz3 + quiz4) / 4;

    printf("Scores: %d, %d, %d, %d\n", quiz1, quiz2, quiz3, quiz4);
    printf("Average: %3.2f\n", average_score);

    return EXIT_SUCCESS;
}
