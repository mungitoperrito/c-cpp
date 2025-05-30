/* Print prime numbers 
 
The linker doesn't find the math.h library. use -lm to include it:

   gcc -ansi -m32 ch03.6.01.c -o prog -lm  && $(pwd)/prog

*/


#include <stdio.h>
#include <math.h>

int main(){

    int i, j;

    printf("%d\n", 2);

    for(i = 3; i <= 100; i = i + 1) {
       for(j = 2; j < i; j = j + 1) {
          if(i % j == 0)
	     break;
	  if(j > sqrt((double)i)) {
	     printf("%d\n", i);
	     break;
	  }
       }
   }

   return 0;
   }
