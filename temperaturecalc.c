#include <stdio.h>

main () 
{
  /*in C all variables must be declared before they are used*/
  /*usually with a type name, and a list of variables 
    int = variable is an integer
  */
  int fahr, celsius;
  int lower, upper, step;

  /* assigns initial values to the variables */
  lower = 0; /*lower limit of temp table*/
  upper = 300; /*upper limit*/
  step = 20; /*step size*/

  fahr = lower;
  /* ea. line of the table is computed the same so */ 
  /* use a loop that repeats once per output line */
  while (fahr <= upper) {
    celsius = 5 * (fahr-32) / 9;
    /*1st arg determins where one of the other args is to be printed
      it causes the vals of the two ints fahr and celsius to be printed 
      with a tab between them.
      %d represents an integer argument*/
    printf("%3d %6d\n", fahr, celsius);
    fahr = fahr + step;
  }
}

