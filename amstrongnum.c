
     #include <stdio.h>
     #include <conio.h>

	void main()
	{
		int num,rem,qub,sum=0,i;
		printf("Armstrong numbers between 350 to 450 are: \n");

		for(i=350; i<=450; i++)
		{
            num=i;
            sum=0;

		   	while(num>0)
	      	{
                rem=num%10;
                qub=rem*rem*rem;
                sum=sum+qub;
	            num=num/10;
	      	}
		      if(sum==i)
	      	{
		      	printf("%d,",sum);
            }
	   	}
	  	getch();
	}



