#include <stdio.h>

#define IN 1
#define OUT 0

main ()
{
  int c, nw, state;
  nw = 0;
  state = OUT;
  
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\t' ) {
      if (state == IN) {
        state = OUT;
        ++nw;
      }
    } else {
      if (state == OUT) {
        state = IN;
        ++nw;
      }
      putchar(c);
    }
  }
  return 0;
}


