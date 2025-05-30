/* Pre processor */ 

/*
To activate DEBUG01 from the command line:
   gcc -ansi -m32 ch09.3.01.c  -o prog -DDEBUG01  && $(pwd)/prog
*/

#include <stdio.h>
#define DEBUG


int main(){

   printf("main 01 \n");

   #ifdef DEBUG01
      printf("DEBUG01 01\n");
   #endif

   printf("main 02 \n");

   #ifdef DEBUG
      printf("DEBUG\n");
   #else
      printf("DEBUG not defined\n");
   #endif

   printf("main 03 \n");

   #ifdef DEBUG01
      printf("DEBUG01 02\n");
   #endif

   printf("main 04 \n");
  
    return 0;
}
