#include <stdio.h>

int main()
{
    int first, second, *p, *q, sum;

    printf("Enter two integers to add\n");
    scanf("%d%d", &first, &second);

    p = &first;
    q = &second;

    sum = *p + *q;

    printf("Sum of entered numbers = %d\n", sum);

    return 0;
}

My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN