              #include<stdio.h>
              void main()
{
    int i = 0,j;
    char ch;
    printf("\nstr is %s",str);
    while((ch = str[i++] )!= '\0')
    {
    j = i;
    printf("\n----ch = %c----",ch);
    while(str[j] != '\0')
    {
        printf("\n--------Checking whether %c =  %c \n",str[j],ch);
        if(ch == str[j])
        {
            printf("\n------------Yes");
            while(str[j]!='\0')
            { 
                printf("\nRemoving %c %d -- \n",str[j]);
                str[j] = str[++j];
                --i;

            }

            break;
        }
        printf("\n------------No");

       //printf("\njj");
        j++;
    }
}

return str;
}
