#include<stdio.h>

int main()
{
    char str[50];
    char rev[50];
    char *sptr = str;
    char *rptr = rev;
    int i = -1;

    printf("Enter any string : ");
    scanf("%s", str);

    while (*sptr)
    {
        sptr++;
        i++;
    }

    while (i >= 0)
    {
        sptr--;
        *rptr = *sptr;
        rptr++;
        --i;
    }

    *rptr = '\0';

    printf("Reverse of string is : %s", rev);

    return 0;
}

My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN