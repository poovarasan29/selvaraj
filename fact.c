#include<stdio.h>
int main()
{
int n;
printf("enter the number: ");
scanf("%d",&n);
for(i=1;i<=n)
{
i++;
sum=sum*i;
}
printf("sum of factorial %d",sum);
return 0;
}
