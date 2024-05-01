#include <stdio.h>

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

  /* int height, length, width, volume, weight; */
  /* length = 12; */
  /* width = 10; */
  /* height = 8; */
  /* volume = length * width * height; */
  /* weight = (volume + 165)/165; */

  /* printf("Dimensions: %dx%dx%d\n", length,width,height); */
  /* printf("Volume (cubic inches): %d\n", volume); */ 
  /* printf("Dimensional weight (pounds): %d\n", weight); */

  /* return 0; */
