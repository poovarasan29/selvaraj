#include<stdio.h>
int main()
{
int k,b,c;
printf("enter the num: ");
scanf("%d%d%d",&k,&b,&c);
if(k<b)
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
printf("largest num: %d",k);
}

