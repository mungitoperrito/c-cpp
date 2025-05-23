/* Scope

Uses two files. Compile with:

gcc -ansi -m32 ch04.4.01.c ch04.4.02.c -o prog  && $(pwd)/prog

*/

#include <stdio.h>

   char var_01[] = "Outside main";
   char var_02[] = "Outside main";
  
   extern char var_03[];
   static char var_04[] = "Outside, in file 01";

void func_01(){
   printf("func_01\n");
   printf("%s\n", var_04);
}


void func_03(){
   static int var_05; 
   
   printf("func_03: ");
   printf("%d ", var_05);
   var_05++;
   printf("%d ", var_05);
}


int main(){

   char var_01[] = "In main"; 

   printf("main\n");
   printf("%s\n", var_01);  /* Local scope overrides global */
   printf("%s\n", var_02);  /* Global scope */

   if(var_03)                   /* Var defined in other file is available */
      printf("%s\n", var_03);

   if(var_04){
      func_01();
      func_02();                /* Static variable not available externally */
   }

   printf("func_03 1\n");       /* Static local variable should persist */
   func_03();
   printf("\n");
   printf("func_03 2\n");
   func_03();
   printf("\n");

   return 0;
}
