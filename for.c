Program: For Loop

#include < stdio.h>

int main()
{
    int i;

    /* The loop goes while i < 10, and i increases by one every loop*/

    for ( i = 0; i < 10; i++ ) {

        /* Keep in mind that the loop condition checks
           the conditional statement before it loops again.
           consequently, when i equals 10 the loop breaks.
           i is updated before the condition is checked. */

        printf( "%d\n", i );
    }
    getchar();
}

-via Programming Hub for Android, a top rated Programming App on Google Play

https://play.google.com/store/apps/details?id=com.freeit.java