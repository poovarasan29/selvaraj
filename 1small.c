#include<stdio.h>
int main()
{
int a[45],i,num,smallest,largest;
printf(" enter the no of elements:");
scanf("%d",&num);
for(i=0;i<=num;i++)
{
	printf("enter element%d: ",i+1);
scanf("%d",&a[i]);
}
smallest=a[0];
largest=a[0];

for(i=0;i<=num;i++)
{
if(a[i]<smallest)

{
smallest=a[i];

}
 if(a[i]>largest)
{
	
largest=a[i];
}
}


printf("largest element%d:",largest);
printf("smallest element%d:",smallest);



return 0;
}


