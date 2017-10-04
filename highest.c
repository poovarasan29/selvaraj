#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the num: ");
scanf("%d%d%d",&a,&b,&c);
if(a<b)
{
   if(b<c)
  {
     printf("largest num: %d",c);
   }
   else 
   if(b>c)
    {
      printf("largest num: %d",b);
     }
    }
else
{
printf("largest num: %d",a);
}

