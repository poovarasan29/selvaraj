


    
#include<stdio.h>



int main( )
{
	char str[40];
	int temp,l,i,j;
	gets(str);
        printf("enter string: ");
	for(l=0;str[l]!='\0';l++);    
	for(i=0,j=l-1;i<l/2;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
       printf(" reverse a string: srg");
	

	
}

return 0;
}
