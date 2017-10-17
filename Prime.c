Program: Check a number is prime number or not by recursion

/*
    author: CreativeCub
*/

#include<stdio.h>

int isPrime(int,int);

int main()
{

    int num,prime;

    printf("Enter a positive number: ");
    scanf("%d",&num);

    prime = isPrime(num,num/2);

    if(prime==1)
        printf("%d is a prime number",num);
    else
        printf("%d is not a prime number",num);

    return 0;
}

int isPrime(int num,int i)
{
    if(i==1)
    {
        return 1;
    }
    else
    {
       if(num%i==0)
            return 0;
       else
            isPrime(num,i-1);
    }
}


-via Programming Hub for Android, a top rated Programming App on Google Play

https://play.google.com/store/apps/details?id=com.freeit.java