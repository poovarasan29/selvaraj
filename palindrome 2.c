

#include <stdio.h>

int main()
{
   int m, reverse = 0, temp;

   printf("Enter a number to check if it is a palindrome or not\n");
   scanf("%d",&m);

   temp = m;

   while( temp != 0 )
   {
      reverse = reverse * 10;
      reverse = reverse + temp%10;
      temp = temp/10;
   }

   if ( m == reverse )
      printf("%d is a palindrome number.\n", m);
   else
      printf("%d is not a palindrome number.\n", m);

   return 0;
}



