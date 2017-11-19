

#include <stdio.h>
int main()
{
  int base, expr;
  double double int value=1;
  printf("Enter base number and exponent respectively: ");
  scanf("%d%d", &base, &expr);
  while (expr!=0)
  {
      value*=base;  
      --expr;
  }
  printf("Answer = %d", value);
}

