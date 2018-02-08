#include<stdio.h>
int main()
{
  int i,count=0,a;
  char a[100];
  printf("enter a line:\n");
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
  if(a[i]=='.')
  count++;
  }
  printf(" total lines are of:%d",count+1);
  return 0;
}
