Program: Sum of n Numbers

/*
    @author: CreativeCub
*/
#include <stdio.h>

int main()
{
   int n, sum = 0, c, value;

   printf("Enter the number of integers you want to add : ");
   scanf("%d", &n);

   printf("Enter %d integers : \n",n);

   for (c = 1; c <= n; c++)
   {
      scanf("%d",&value);
      sum = sum + value;
   }

   printf("Sum of entered integers = %d\n",sum);

   return 0;
}


-via Programming Hub for Android, a top rated Programming App on Google Play

https://play.google.com/store/apps/details?id=com.freeit.java