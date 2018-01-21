#include <stdio.h>
int main()
{
    int i, h, a = 0, b = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &h);

    printf("Fibonacci Series: ");

    for (i = 1; i <= h; ++i)
    {
        printf("%d, ", a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    return 0;
}
