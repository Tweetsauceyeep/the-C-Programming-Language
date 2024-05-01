### Chapter 1: Notes

#### Character Input and Outupt
- text streams: sequence of chars divided into lines; each line consisting of zero or more characters followed by a newline character

functions: 
- getchar() - reads next input character from a text stream and returns that as its value. 
- putchar(c) prints a character each time it is called
    - prints the contents of the integer variable c as a character

*question*: Why is state represented by 0 and 1?
- idk ngl

changed book to C programming: a modern approach cuz like im rusty

---

# C Programming: a Modern Approach

### Compiling and Linking:
3 steps are involved in making a program ready to be run.

- *Preprocessing*:
    - Something like an editor, adds things to the program and make modifications
- *Compiling*:
    - THe modified program goes to a compiler, translating it into machine instructions (object code)
- *Linking*:
    - combines object code produced by the compiler 

### Directives
- Commands intended for the preprocessor - Directives
ex. `#include <stdio.h>`

### Functions:
- Procedures/subroutines

ex. 
```
#include <stdio.h>

int main(void)
{
    printf("jlasdjaslkdjsakldj")
    return 0;
}
```

int - specifies that the function returns an integer
void - indicates func has no arguments
return 0: - causes the main function to terminate + indicates that the main function returns a value of 0

### Variables:
- variables with the same type can have combined declarations.
```
int height, length, width, volume;
float profit, loss;

//Assignment
int height;
height = 8;
// floats
float profit;
profit = 2500.48f;

```

### Reading input:
- scanf function.
example: `scanf("%d", &i);`
- reads an integer and stores it into variable "i".

