#include<stdio.h>
int main()
{
int a;
printf("enter the number: ");
scanf("%d",&a);
for(i=1;i<=a)
{
i++;
sum=sum*i;
}
printf("sum of factorial %d",sum);
return 0;
}
