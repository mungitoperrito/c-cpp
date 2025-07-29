/* Strings */

#include <stdio.h>
#include <string.h>

int count_occurances(char* search_array, int len_search_array, char search_char){
   
   int i; 
   int num_occurances = 0;

   for(i = 0; i < len_search_array; i++){
      if(search_array[i] == search_char)
         num_occurances++;
   }

   return num_occurances; 
}


int main(){

   int str_02_size = 20;
   int str_03_size = 30;

   char str_01[] = "Hello";
   /* Not permitted:
   char str_02[str_02_size] = "Hello";
   */
   char str_02[20] = "Hello";
   char str_03[str_03_size] ;

   int i;
   int len_array;
   char val = '1';

   /* initialize str_03 to some value */

   for(i = 0 ; i < str_03_size ; i++){
      str_03[i] = val;
   }

   /* Length of an array: sizeof(some_array) / sizeof(some_array[0]) */

   printf("strlen ignores blanks in string array\n");
   printf("strlen: %2d  ", strlen(str_01));
   printf("%s.\n", str_01);
   printf("len: %2d  ", sizeof(str_01) / sizeof(str_01[0]));
   printf("%s.\n", str_01);
   printf("strlen: %2d  ", strlen(str_02));
   printf("%s.\n", str_02);
   printf("len: %2d  ", sizeof(str_02) / sizeof(str_02[0]));
   printf("%s.\n", str_02);
 
   printf("\n");

   if(strcmp(str_01, str_02)){
      printf("strcmp ignores blanks in string array\n");
   }
   else{
      printf("strcmp counts blanks in string array\n");
   }

   printf("\n");

   /* Check strcpy */
   printf("strcopy ignores trailing blanks\n");

   len_array = sizeof(str_03) / sizeof(str_03[0]);
   printf("Start: %d\n", count_occurances(str_03, len_array, '1'));
   strcpy(str_03, str_01);

   len_array = sizeof(str_03) / sizeof(str_03[0]);
   printf("After str_01: %d\n", count_occurances(str_03, len_array, '1'));
   strcpy(str_03, str_02);

   len_array = sizeof(str_03) / sizeof(str_03[0]);
   printf("After str_02: %d\n", count_occurances(str_03, len_array, '1'));
   
   return 0;
}
