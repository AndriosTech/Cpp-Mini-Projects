#include<iostream>
using namespace std;

int main()
{
    int hr, basic, ma, ca, net;

    cout<<"Enter the basic pay";
    cin>>basic;

    if(basic > 5000)
    {
        ma = basic * 2/100;
        ca = 193;
        hr = basic * 45/100;
    }
    else
    {
        ma = basic * 5/100;
        ca = 96;
        hr = basic * 45/100;
    }

    net = ma+ca+hr+basic;
    cout<<"Net pay is "<<net;
}