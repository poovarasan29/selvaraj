#include<stdio.h>
#include<math.h>
void main()
{
int i,n;
scanf("%d",&n);
for(i=1;i<=(n/2);i++)
{
if(pow(2,i)==n)
{
printf("YES");
}
}
}
