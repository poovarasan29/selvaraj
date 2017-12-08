#include<stdio.h>

int main()
{
    int m, i, sum = 0;

    printf("Enter the number : ");
    scanf("%d", &m);

    for (i = 1; i <= m; i++)
        sum += i * i;

    printf("sum : %d", sum);

    return 0;
}


