

#include <stdio.h>

void main()

{

	int k, b, c, i, n; k =0; b=1;
	

	
	

	printf("Enter a number to define the length of fibonacci series: ");
	scanf("%d", &n);
	printf("\nThe Series is: \n");
	printf("%d\t%d", k, b);

	for (i = 0; i < n; i++)

	{
          c=k+b;
		

		K = b;

		b = c;

		printf("\t%d",  c);

	}

	getch();

}


