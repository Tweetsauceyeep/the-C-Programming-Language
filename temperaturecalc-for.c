#include <stdio.h>

main () 
{
  int fahr;

  for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

/*most of the variables are eliminated.
 step size only appears as constants in the for loop
 expression computing celsius appears as the 3rd argument of printf rather than a separate assignment
 */
