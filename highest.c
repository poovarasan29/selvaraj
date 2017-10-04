#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the value:");
scanf("%d%d%d,&a,&b,&c");
if(a<b)
{
if(a<c)
{
printf("large num:%d,c");
}
else if(b>c)
{
printf("large num:%d,b");
}
else
{
printf("large num:%d,a");
}
