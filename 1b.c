#include<stdio.h>
int main()
{
   int s,b[100],i,temp,j,k;
   printf("enter the count\nenter the elements");
   scanf("%d",&s);
   for(i=1;i<=s;i++)
   {
       scanf("%d",&b[i]);
   }
   for(j=1;j<=s;j++)
   {
      for(k=j+1;k<=s;k++)
      {
        if(b[j]>=b[k])
        {
        temp=b[j];
        b[j]=b[k];
        b[k]=temp;
            
        }
      }
   
   }
        printf(" %d\t",b[j/2]);

}
