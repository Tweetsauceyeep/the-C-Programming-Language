#include <stdio.h>

int main(void)
{
  int month, date, year;

  printf("Enter a date: ");
  scanf("%d/%d/%d", &month, &date, &year);
  printf("entered the date: %d%.2d%.2d", year, month, date);

  return 0;
}
