#include<iostream>
using namespace std;

int main()
{
    int d, bin;

    cout<<"Enter value"<<endl;
    cin>>d;

    while(d >= 1)
    {
        bin = d % 2;
        d  = d / 2;
        cout<<bin;
    }
}