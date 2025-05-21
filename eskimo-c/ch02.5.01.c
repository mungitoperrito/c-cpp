/* Arithmetic operators */

#include <stdio.h>

int main(){
   
   int one = 1;
   int five = 5;
   float one_f = 1.0;
   float five_f = 5.0;


   printf("int +: %d\n", one + five);
   printf("float +: %f\n", one_f + five_f);
   printf("both +: %f\n", one_f + five);
   printf("\n");

   printf("int -: %d\n", one - five);        /* %u overflows buffer */
   printf("float -: %f\n", one_f - five_f);
   printf("both -: %f\n", one_f - five);
   printf("\n");
   
   printf("int *: %d\n", one * five);
   printf("float *: %f\n", one_f * five_f);
   printf("both *: %f\n", one_f * five);
   printf("\n");

   printf("int /: %d\n", one / five);
   printf("float /: %f\n", one_f / five_f);
   printf("both /: %f\n", one_f / five);
   printf("\n");

   printf("int %%: %d\n", one % five); /* 5 needs a different escape style */
   printf("float: Not allowed\n");     /* Only integer types */
   printf("both: Not allowed\n");      /* Only integer types */
   printf("\n");

   return 0;
}
