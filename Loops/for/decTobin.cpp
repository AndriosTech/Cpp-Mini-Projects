#include<iostream>
using namespace std;

int main()
{
    int d, bin;

    cout<<"Enter value"<<endl;
    cin>>d;

    bin = 0;

    while(d >= 1)
    {
        d = d/2;
        bin = d%2;
        cout<<bin;
    }
}