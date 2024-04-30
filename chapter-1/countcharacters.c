#include <stdio.h>

int main()
{
  int c;
  int char_count = 0;

  while ((c=getchar()) != EOF) {
    char_count++;
  }
  printf("\ntotal char count: %d\n", char_count);

  return 0;
}
