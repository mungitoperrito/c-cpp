/* Pointers */

#include <stdio.h>


int main(){

   int value = 5;
   int *value_pointer;

   value_pointer = &value;                             /* The address of value */

   printf("value: %d\n", value);
   printf("value pointer: %p\n", value_pointer);       /* %p pointer address */
   printf("value referenced: %d\n", *value_pointer);

   return 0;
}
