#include <stdio.h>
int main() 
{
char a;
printf("enter a  string:",a);
scanf("%s",&a);
if(a>=65&&a<=90||a>=97&&a<=122)
{
printf("no");
}
else
{
printf("yes");
return 0;
}
}
