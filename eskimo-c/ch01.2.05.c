/* K&R */
/* Fahrenheit-Celsius table */

#include <stdio.h>

int main(){

   int fahr;

   for (fahr =-40; fahr <= 250; fahr = fahr + 32)
      printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

   return 0;
}



