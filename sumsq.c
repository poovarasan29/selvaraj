#include<stdio.h>

int main()
{
    int k, i, sum = 0;

    printf("Enter the number : ");
    scanf("%d", &k);

    for (i = 1; i <= k; i++)
        sum += i * i;

    printf("sum : %d", sum);

    return 0;
}


