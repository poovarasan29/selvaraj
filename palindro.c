

#include <stdio.h>

int main()
{
   int k, reverse = 0, temp;

   printf("Enter a number to check if it is a palindrome or not\n");
   scanf("%d",&k);

   temp = k;

   while( temp != 0 )
   {
      reverse = reverse * 10;
      reverse = reverse + temp%10;
      temp = temp/10;
   }

   if ( k == reverse )
      printf("%d is a palindrome number.\n", k);
   else
      printf("%d is not a palindrome number.\n", k);

   return 0;
}



