/*
 K&R program example 
 Fahrenheit-Celsius table, floating-point version
*/

#include <stdio.h>

int main() {
   float fahr, celsius;
   float lower, upper, step;
   lower = -40;                /* lower limit of temperatuire scale */
   upper = 250;                /* upper limit */
   step = 32;                  /* step size */
   fahr = lower;
 
   while (fahr <= upper) {
      celsius = (5.0/9.0) * (fahr-32.0);
      printf("%3.0f %6.1f\n", fahr, celsius);
      fahr = fahr + step;
   }

   return 0;
}

