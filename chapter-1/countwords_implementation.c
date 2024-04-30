#include <stdio.h>
#define IN 1
#define OUT 0


/*counts lines, words and characters*/
int main() {
  int c, line, word, characters, state;
  /*im assuming the state of "OUT" just means that the program is not on a word or input*/
  state = OUT;

  /*initializing the count at 0*/
  line = word = characters = 0;

  /*word counting*/
  while ((c = getchar()) != EOF) {
    ++characters;
    if (c == '\n') {
      ++line;
    } 
    /*program is not on a word then set its state to out*/
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    } else if (state == OUT){
      state = IN;
      ++word;
    }
  }
  printf("\nline count: %d word count: %d char count: %d\n", line, word, characters);
}
