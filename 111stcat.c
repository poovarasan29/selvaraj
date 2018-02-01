#include<stdio.h>
#include<string.h>
int main()
{
char a[222],b[444];
printf("enter the frist char:");
scanf("%s",&a);
printf("enter the second char:");
scanf("%s",&b);
strcat(a,b);
printf(" concat %s",a);
return 0;
}
