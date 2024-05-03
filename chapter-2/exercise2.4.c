#include <stdio.h>
/*take f to c and replace h l and w with initializers and remove the weight variable*/

#define INCHES_PER_POUND 166

int main (void)
{
  /*make below program take input*/
  int height, length, width, volume, weight;
  printf("Enter Height of Box: ");
  scanf("%d", &height);
  printf("Enter Width of Box: ");
  scanf("%d", &width);
  printf("Enter length of Box: ");
  scanf("%d", &length);

  volume = length * width * height;
  weight = (volume + INCHES_PER_POUND - 1)/INCHES_PER_POUND;

  printf("Volume (cubic inches): %d\n", volume); 
  printf("Dimensional weight (pounds): %d\n", weight);

}


