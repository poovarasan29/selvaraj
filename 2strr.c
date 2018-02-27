#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	int i,n;
	printf("enter string:");
	scanf("%s",&a);
	printf("enter the no to display");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("%c",a[i]);
	}
	return 0;
}
