#include<stdio.h>
int main()
{
int n,count=0;
printf("enter digits:");
scanf("%d",&n);
while(n!=0)
{
count++;
n=n/10;
}
printf("num of dig %d",count);
return 0;
}
