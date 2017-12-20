

#include <stdio.h>

int main()
{
   int s, reverse = 0, temp;

   printf("Enter a number to check if it is a palindrome or not\n");
   scanf("%d",&d);

   temp = s;

   while( temp != 0 )
   {
      reverse = reverse * 10;
      reverse = reverse + temp%10;
      temp = temp/10;
   }

   if ( s == reverse )
      printf("%d is a palindrome number.\n", s);
   else
      printf("%d is not a palindrome number.\n", s);

   return 0;
}



