

#include <stdio.h>

int main()
{
   int g, reverse = 0, temp;

   printf("Enter a number to check if it is a palindrome or not\n");
   scanf("%d",&g);

   temp = g;

   while( temp != 0 )
   {
      reverse = reverse * 10;
      reverse = reverse + temp%10;
      temp = temp/10;
   }

   if ( g == reverse )
      printf("%d is a palindrome numr.\n", g);
   else
      printf("%d is not a palindrome numr.\n", g);

   return 0;
}



