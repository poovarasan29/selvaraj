#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i=1,j,k;
    //clrscr();
    printf("\nEnter a number:");
    scanf("%d",&num);
    while(i<=num)
    {
        k=0;
        if(num%i==0)	// checks for factor
        {
            j=1;
            while(j<=i)
            {
                if(i%j==0)
                {
                    k++;
                }
                j++;
            }
            if(k==2)            
                printf("\n%d is a prime factor",i);
        }
        i++;
    }
    getch();
}
