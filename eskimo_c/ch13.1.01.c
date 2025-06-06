/* Command line args */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

   int i;

   for(i = 0; i < argc; i++){
      printf("ARG %d: %s\n", i, argv[i]);
   }
  
   return EXIT_SUCCESS;
}


/*
Sample output:

prompt> $(pwd)/prog a bc def=10

ARG 0: /mnt/e/FILES/projects/c-cpp/eskimo_c/prog
ARG 1: a
ARG 2: bc
ARG 3: def=10
*/
