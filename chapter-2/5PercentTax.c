#include <stdio.h>
#define TAX_ADDED 1.05

int main(void)
{
  float amount, final_amount;
  
  printf("Enter Amount: ");
  scanf("%f", &amount);

  /* final_amount = amount + (amount * TAX_ADDED); */
  final_amount = amount * TAX_ADDED;
  printf("Tax Added: $%.2f", final_amount);
}
