#include<stdio.h>

void partitionEqualAvt(int *a, int n)
{

    int i;
    int sum=0, sSum=0, eSum, sAvg, eAvg;
    for(i=0; i<n; i++)
        sum+=a[i];
    eSum=sum;
    for(i=0; i<n-1; i++)
    {
        sAvg=0;
        eAvg=0;
        sSum+=a[i];
        eSum=sum-sSum;
        sAvg=sSum/(i+1);
        eAvg=eSum/(n-i-1);
        if(sAvg == eAvg)
        {
            printf("\nAverage = %d from [%d to %d] and [%d to %d]", sAvg, 0, i, i+1, n);
        }
    }
}

int main()
{

    int a[]={1,1,1,1,1,1};
    int n=sizeof(a)/sizeof(int);
    partitionEqualAvt(a,n);
    return 0;
}
