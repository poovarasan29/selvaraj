#include<stdio.h>
 int main()
{
    char str[555];
    int i;
    printf("Enter a string:");
    scanf("%s",str);
   printf("\n The number is:");
    for(i=0;str[i]!='\0';i++)
    {
        if(isdigit(str[i]))
        {
           printf("%c",str[i]);
        }
    }
  return 0;
}
