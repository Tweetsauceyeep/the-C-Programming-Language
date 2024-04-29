#include <stdio.h>
/*exercise 1.3: modify temperature conversion program to print a heading  above the table*/

main()
{
  float fahr, celsius;
  int lower, upper,step;
  char header[12] = "temperature";

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  printf("%4s\n", header);

  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    /*6.1f => describes number printed atleast 6 characters wide, with one digit after the decimal point*/
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
