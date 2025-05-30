/* 
  Read one line from standard input 

  Return line length, 0 for empty line, or EOF for end-of-file. 
*/

#include <stdio.h>

int getline(int max){
   int num_chars = 0;
   int c;
   char line[max]; 
   max = max - 1;			/* Leave room for '\0' */

   while((c = getchar()) != EOF){
      if(c == '\n')
         break;

      if(num_chars < max){              /* Protects from too long lines */
         line[num_chars] = c;
	 num_chars = num_chars + 1;
      }
   }

   if(c == EOF && num_chars == 0)       /* 0 length line is ok */
      return EOF;

   line[num_chars] = '\0';

   printf("DEBUG: %s\n", line);         /* NB show truncated too long lines */

   return num_chars;
}

int main(){

   printf("%d\n", getline(20));

   return 0;
}
