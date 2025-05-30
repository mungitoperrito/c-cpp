#include <stdio.h>

#define TRUE 1
#define FALSE 0

int is_substring(char target[], char pattern[]){

   int is_substring = FALSE;   

   char *start, *p1, *p2;

   for(start = &target[0]; *start != '\0'; start++){
      p1 = &pattern[0];       /* Reset beginning of pattern */  
      p2 = start;             /* Increment start of next search */

      while(*p1 != '\0'){
         if(*p1 != *p2)
            break;             /* Characters are different */
         p1++;
         p2++;
      }
      if(*p1 == '\0')
         is_substring = TRUE;     /* All characters matched */
   }   

   return is_substring;
}

int main(){

   char source_str[] = "A long string";
   char search_str_01[] = "long";
   char search_str_02[] = "nope";

   printf("String: %s\n", source_str);
   printf("Is substring: %s ? %d\n", search_str_01, is_substring(source_str, search_str_01));
   printf("Is substring: %s ? %d\n", search_str_02, is_substring(source_str, search_str_02));

   return 0;
}
