/*
*
**
***
****
*****
*/

#include <stdio.h>

int main()
{

    int n, c, k;

    printf("Enter number of rows\n");
    scanf("%d", &n);

    for (c = 1; c <= n; c++)
    {

        for (k = 1; k <= c; k++)
            printf("*");

        printf("\n");
    }

    return 0;
}

My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN