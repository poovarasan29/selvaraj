#include<stdio.h>
int main()
{
int a,b,temp;
printf("Enter any two integers: ");
scanf("%d%d",&a,&b);
printf("Before swapping: a = %d, b=%d",a,b);
temp = a;
a = b;
b = temp;
printf("\nAfter swapping: a = %d, b=%d",a,b);
return 0;
}