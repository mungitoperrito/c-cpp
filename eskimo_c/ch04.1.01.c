#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i;
	int die_1, die_2;
	int rolls[13];	                /* Only uses slots 2 to 12 */
        int count;
        int num_rolls = 75000;
        double percentage;
        time_t seconds = time(NULL);    /* Seconds sice teh epoch */

	for(i = 0; i <= 12; i = i + 1)  /* Initialize an empty array */
		rolls[i] = 0;


        srand(seconds);
	for(i = 0; i < num_rolls; i = i + 1){
	   die_1 = rand() % 6 + 1;           /* Values from 1 to 6 */
	   die_2 = rand() % 6 + 1;
	   rolls[die_1 + die_2] = rolls[die_1 + die_2] + 1;
        }

	for(i = 2; i <= 12; i = i + 1){
           count = rolls[i];
           percentage = (count / (double) num_rolls) * 100; 
           printf("%2d: %05.2f  %6d\n", i, percentage, count);
        }

        printf("\n\n");

        printf("%2d: %05.2f   1,1\n", 2, (1/36.0 *100));
        printf("%2d: %05.2f   1,2  2,1\n", 3, (2/36.0 *100));
        printf("%2d: %05.2f   1,3  2,2  3,1\n", 4, (3/36.0 *100));
        printf("%2d: %05.2f   1,4  2,3  3,2  4,1\n", 5, (4/36.0 *100));
        printf("%2d: %05.2f   1,5  2,4  3,3  4,2  5,1\n", 6, (5/36.0 *100));
        printf("%2d: %05.2f   1,6  2,5  3,4  4,3  5,2  6,1\n", 7, (6/36.0 *100));
        printf("%2d: %05.2f   2,6  3,5  4,4  5,3  6,1\n", 8, (5/36.0 *100));
        printf("%2d: %05.2f   3,6  4,5  5,4  6,3\n", 9, (4/36.0 *100));
        printf("%2d: %05.2f   4,6  5,5  6,4\n", 10, (3/36.0 *100));
        printf("%2d: %05.2f   5,6  6,5\n", 11, (2/36.0 *100));
        printf("%2d: %05.2f   6,6\n", 12, (1/36.0 *100));

	return 0;
}


/* SAMPLE OUTPUT 75000 ROLLS

 2: 02.78    2088
 3: 05.57    4175
 4: 08.37    6274
 5: 11.28    8457
 6: 13.80   10348
 7: 16.87   12649
 8: 13.77   10328
 9: 11.09    8315
10: 08.11    6085
11: 05.53    4144
12: 02.85    2137


 2: 02.78   1,1
 3: 05.56   1,2  2,1
 4: 08.33   1,3  2,2  3,1
 5: 11.11   1,4  2,3  3,2  4,1
 6: 13.89   1,5  2,4  3,3  4,2  5,1
 7: 16.67   1,6  2,5  3,4  4,3  5,2  6,1
 8: 13.89   2,6  3,5  4,4  5,3  6,1
 9: 11.11   3,6  4,5  5,4  6,3
10: 08.33   4,6  5,5  6,4
11: 05.56   5,6  6,5
12: 02.78   6,6

*/
