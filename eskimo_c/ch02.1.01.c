/* Type sizes */

#include <stdio.h>

int main(){

   printf("char: %u\n", sizeof(char));
   printf("int: %u\n", sizeof(int));
   printf("long: %u\n", sizeof(long));
   printf("float: %u\n", sizeof(float));
   printf("double: %u\n", sizeof(double));
   printf("pointer: %u\n", sizeof(void *));

   printf("\n");

   return 0;
}
