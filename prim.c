
   

#include<stdio.h>

int isPrime(int,int);

int main()
{

    int n,prime;

    printf("Enter a positive number: ");
    scanf("%d",&n);

    prime = isPrime(n,n/2);

    if(prime==1)
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);

    return 0;
}

int isPrime(int n,int i)
{
    if(i==1)
    {
        return 1;
    }
    else
    {
       if(n%i==0)
            return 0;
       else
            isPrime(n,i-1);
   return 0;    }
}


