#include<stdio.h>
#include<string.h>
void main()
{
    char s[20];
    int i,j,count=0,length;
    scanf("%s",&s);
    length=strlen(s);
    for(i=0;i<length;i++)
    {
        for(j=i+1;j<length;j++)
        {
            if(s[i]==s[j])
            {
                count=1;
            }
        }
    }
        if(count==1)
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }
}
