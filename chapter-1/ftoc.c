#include <stdio.h>

#define SCALE_FACTOR (5.0f / 9.0f)
#define FREEZING_POINT 32.0f


int main(void)
{
  float fahrenheit, celsius;

  printf("Enter Fahrenheit Temperature: ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - FREEZING_POINT) * SCALE_FACTOR;
  printf("Celsius: %.1f", celsius);
  return 0;

}
