/* Demo a loop */

#include <stdio.h>

int main(){

    int i;
    int last = 5;

    for(i = 0; i < last; i = i + 1){
       printf("%d", i);
       if(i < last - 1)
          printf(" "); 
    }  /* multi-line loop needs {} */

    printf("\n");

    return 0;
}


