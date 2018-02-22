#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,avg,sum;
	printf("enter the number:");
	scanf("%d",&a);
	printf("n num");
	scanf("%d%d%d%d%d",&b,&c,&d,&e,&f);
	sum=b+c+d+e+f;
	avg=sum/a;
	printf("%d",avg);
	return 0;
}
