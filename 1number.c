#include<stdio.h>
int main()
{
	int s,i,a[20];
	printf("Enter a  Number:");
	scanf("%d",&s);
	for(i=1;i<=s;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]!=i)
		{
			printf("\nThe Changed Number is %d",i);
		}
	}
	return 0;
}
