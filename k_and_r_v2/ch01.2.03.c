/* From K&R */

 #include <stdio.h>

 int main(){
   int fahr, celsius;
   int lower, upper, step;
 
   lower = -40;      /* lower limit of temperature scale */
   upper = 300;      /* upper limit */
   step = 32;        /* step size */
   fahr = lower;
 
   while (fahr <= upper) {
      celsius = 5 * (fahr-32) / 9;    /* Drops fractions */
      printf("%d\t%d\n", fahr, celsius);
      fahr = fahr + step;
   }

   return 0;
}
