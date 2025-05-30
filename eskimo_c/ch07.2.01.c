/* ++ -- operators */


#include <stdio.h>

int main(){

   int pre = 0;
   int post = 0;
   int count;

   for(count = 0; count < 10; count = count + 1){

      printf("count: %d  ", count);
      printf("pre:   %d  ", ++pre );
      printf("post:  %d\n", post++);
   }

   
   return 0;
}
