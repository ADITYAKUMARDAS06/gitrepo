/*  C++ Program to Calculate Arithmetic Mean of N numbers  */

#include<iostream>
using namespace std;

int main()
{
        int n, i, arr[50], sum=0;
        cout<<"\nHow many number you want to enter :: ";
        cin>>n;

        cout<<"\nEnter "<<n<<" Numbers Below :: \n";
        for(i=0; i<n; i++)
        {
            cout<<"\nEnter [ "<<i+1<<" ] Number :: ";
                cin>>arr[i];
                sum=sum+arr[i];
        }

        int armean=sum/n;

        cout<<"\nArithmetic Mean of [ "<<n<<" ] Numbers = "<<armean<<"\n";

        return 0;/*  C++ Program to Calculate Arithmetic Mean of N numbers  */
}
