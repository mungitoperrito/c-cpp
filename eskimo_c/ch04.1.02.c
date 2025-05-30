/* Fake 0 initialization */


#include <stdio.h>

int main(){

   int array_1[5];
   int array_2[5] = {0};  /* When less than array_length values, default is 0 */

   printf("array_1[3]: %d\n", array_1[3]);  /* Should be garbage */
   printf("array_2[3]: %d\n", array_2[3]);  /* Should be 0 */

   return 0;
}
