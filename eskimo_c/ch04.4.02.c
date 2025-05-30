/* Scope - external file */

#include <stdio.h>


char var_03[] = "Outside, external file";

void func_02(){
   /*  Next four code lines fail since var_04 isn't exported */
/*   if(var_04)
       printf("%s\n", var_04);
   else
       printf("var_04 not available externally\n");
*/

   printf("See note in source file\n");
}
