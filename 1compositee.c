#include<stdio.h>
void main()
{
int a,i,count=0;
scanf("%d",&a);
for(i=1;i<=n;i++)
{
if((a%i)==0)
{
count++;
}
}
if(count==0)
{
printf("no,not a composite");
}
else
{
printf("yes, composite");
}
}
