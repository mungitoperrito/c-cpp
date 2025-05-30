/* Boolean */

#include <stdio.h>

int int_divide(int i, int j){
    if(j)                /* Checks 'truth'to avoid divide by zero */
      return i / j;
    else
       return -1;        /* Returns -1 if divide by 0 */  
}

int main(){

   int true = 1;
   int false = 0;
   int a;

   printf("or:  TT, TF, FT\n");
   

   printf("xor: TF, FT\n");

   if (true && true)
      printf("%d, %d\n", true, true);
   if (true || false)
      printf("%d, %d\n", true, false);
   if (false || true)
      printf("%d, %d\n", false, true);
   if (false == (false && false))
      printf("%d, %d\n", false, false);

   printf("\n\n");

   /* Avoid divide by 0 */
   for(a = 2; a >= 0; a--){          /* for(int a = 2 .. not allowed in ansi c */
      printf("%d / %d = %d\n", 2 * a, a, int_divide(2 * a, a));  
   }


   return 0;
}
