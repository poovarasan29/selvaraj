#include<stdio.h>
int main()
{
int p;
printf("enter the number: ");
scanf("%d",&p);
for(i=1;i<=p)
{
i++;
sum=sum*i;
}
printf("sum of factorial %d",sum);
return 0;
}
