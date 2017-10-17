Program: Find Power of Number (x^n)

#include <stdio.h>
int main()
{
  int base, exp;
  double double int value=1;
  printf("Enter base number and exponent respectively: ");
  scanf("%d%d", &base, &exp);
  while (exp!=0)
  {
      value*=base;  /* value = value*base; */
      --exp;
  }
  printf("Answer = %d", value);
}

-via Programming Hub for Android, a top rated Programming App on Google Play

https://play.google.com/store/apps/details?id=com.freeit.java