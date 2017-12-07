#include<stdio.h>

int main()
{
    int h, i, sum = 0;

    printf("Enter the number : ");
    scanf("%d", &h);

    for (i = 1; i <= h; i++)
        sum += i * i;

    printf("sum : %d", sum);

    return 0;
}


