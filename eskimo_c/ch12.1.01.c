/* File IO */

#include <stdio.h>
#include <stdlib.h>

#define FILENAME "ch12.1.01.c"
#define LINE_LENGTH 128
#define EXIT_ERROR return -1

int main(){

   int count;
   char ch;
   FILE *fp;     /* FILE is a defined pointer type */

   char *line_buffer = (char *)malloc(sizeof(char) * LINE_LENGTH);
   if (line_buffer == NULL){
      printf("Can't get memory.\n");
      EXIT_ERROR;
   }

   fp = fopen(FILENAME, "r");
   if (fp == NULL){
      printf("Can't open file.\n");
      EXIT_ERROR;
   }
      
   /* Better to use getline() */
   ch = getc(fp);
   count = 0;

   while ((ch != '\n') && (ch != EOF)){
      if(count != LINE_LENGTH){
         line_buffer[count] = ch;
      }     /* ignores characters beyond LINE_LENGTH */

      count++;
      ch = getc(fp);
   }

   /* Confirm file read */ 
   printf("%s\n", line_buffer);

   return 0;
}
