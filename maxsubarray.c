int main(void)
{
    int array[] = {1, -2, 3, 5, -4};
    int max = -1;                        
    int len = sizeof(array)/sizeof(int);  

    for(int slen = len; slen > 0; slen--)           
    {
        for(int jdx = 0; jdx+slen <= len; jdx++)   
        {
             int temp = calcSum(array, jdx, slen);
             if(temp > max)
                 max = temp;

        }
    }
    printf("maximum sum of sub-array is: %d\n", max);
}
