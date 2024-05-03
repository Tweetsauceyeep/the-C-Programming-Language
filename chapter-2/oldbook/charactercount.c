#include <stdio.h>

/* instead of using EOF maybe utilize '\n' */

main()
{
  double nc;

  for (nc = 0; getchar() != '\n'; ++nc)
    /*grammatical rules of C make it so that a for has a body, so ; is a null statement there to satisfy the requirement*/
    ;
  printf("%.0f\n", nc);
  /* .0f suppresses the printing of the decimal ppoint or the fraction part */
}
