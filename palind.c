

#include <stdio.h>

int main()
{
   int d, reverse = 0, temp;

   printf("Enter a number to check if it is a palindrome or not\n");
   scanf("%d",&d);

   temp = d;

   while( temp != 0 )
   {
      reverse = reverse * 10;
      reverse = reverse + temp%10;
      temp = temp/10;
   }

   if ( d == reverse )
      printf("%d is a palindrome number.\n", d);
   else
      printf("%d is not a palindrome number.\n", d);

   return 0;
}



