/* Arrays and pointers */


#include <stdio.h>

#define ARRAY_LEN 10

int main(){

   int array_01[5] = {'0'};  /* Compiler fills remaining values with 0s, no '\0'!!! */
   int i = 0;

   /*  Runs forever. Array doesn't end with \0
   while (array_01[i] != '\0'){
      printf("%c\n", array_01[i]); 
   }

   */


   int array_02[ARRAY_LEN] = {0};
   int *array_ptr; 

   printf("INDEX: %d\n", array_02[0]);
   printf("PTR:   %d\n", *array_02);

   /* Set some values */
   for(i = 0; i < ARRAY_LEN; i++){
      array_02[i] = i;
   }   

   printf("INDEX: %d\n", array_02[5]);
   printf("PTR:   %d\n", *(array_02 + 5));
   

   printf("IND ADDR:  %p\n", &array_02[0] + 5);  /* Prints address, not value */
   printf("PTR ADDR:  %p\n", array_02 + 5);      /* Prints address, not value */

   return 0;
}
