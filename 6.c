#include <stdio.h>
main()
{
long sec, hr, min, t;
printf("\nEnter time in seconds: ");
scanf("%ld", &sec);
hr = sec/3600;
t = sec%3600;
min = t/60;
sec = t%60;
printf("\n\nTime is %ld hrs %ld mins %ld secs", hr, min, sec);
getch();
}
