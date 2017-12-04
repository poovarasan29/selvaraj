#include <stdio.h>

int main()
{
    int k, c, d, a[100], b[100];

    printf("Enter the number of elements in array\n");
    scanf("%d", &k);


    for (c = 0; c < k; c++)
        scanf("%d", &a[c]);

    /*
     * Copying elements into array b starting from end of array a
     */

    for (c = k- 1, d = 0; c >= 0; c--, d++)
        b[d] = a[c];

    /*
     * Copying reversed array into original.
     * Here we are modifying original array, this is optional.
     */

    for (c = 0; c < k; c++)
        a[c] = b[c];

    printf("Reverse array is\n");

    for (c = 0; c < k; c++)
        printf("%d\n", a[c]);

    return 0;
}

