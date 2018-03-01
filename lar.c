#include<stdio.h>
int main()
{
int k,b,m;
printf("enter the num: ");
scanf("%d%d%d",&k,&b,&m);
if(k<b)
{
   if(b<m)
  {
     printf("largest num: %d",m);
   }
   else 
   if(b>k)
    {
      printf("largest num: %d",b);
     }
    }
else
{
printf("largest num: %d",k);
}

    return 0;
}
