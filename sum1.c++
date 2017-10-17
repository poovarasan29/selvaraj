Program: Sum of n Numbers

/*
    @author: CreativeCub
*/
#include<iostream>
using namespace std;

int main()
{
    int times, Inp, sum,i;

    times=Inp=sum=i=0;

    cout << "Input the number of integers you want to add:";
    cin >> times;

    for (i=times; i>0; i--)
    {
        cout << "Enter a number:";
        cin >> Inp;
        sum=sum+Inp;
    }

    cout<<"The sum of your " << times << " numbers is "<< sum;
    cout<< "." << endl;

    return 0;
}


-via Programming Hub for Android, a top rated Programming App on Google Play

https://play.google.com/store/apps/details?id=com.freeit.java