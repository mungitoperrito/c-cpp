/* malloc, free */


#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LEN 10

int main(){

   int i;

   /* Allocate memory */
   int *ip = malloc(ARRAY_LEN * sizeof(int));

   /* Check allocation succeed */
   if( ip == NULL ){
      printf("Memory not allocated\n");
      return -1;
   } 

   /* Initialize some values */
   for(i = 0; i < ARRAY_LEN; i++){
      *(ip + i) = i;   
   }

   printf("CHECK_01: %d\n", *ip);
   printf("CHECK_02: %d\n", *(ip + 5));
   printf("CHECK_03: %d\n", *(ip + 9));

   free(ip);

   /* This works!!! Memory no longer safe */
   printf("Use after free\n");
   printf("CHECK_04: %d\n", *(ip + 9));
   
   ip = NULL;
   printf("Use after NULL\n");
   /* This segfaults at runtime
   printf("CHECK_05: %d\n", *(ip + 9));
   */

   return 0;
}
