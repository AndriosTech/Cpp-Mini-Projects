#include<iostream>
using namespace std;

int main()
{
    int a[5], n, p, i;

    for(i=0; i<=4; i++)
    {
        cout<<"Enter value in element"<<endl;
        cin>>a[i];
    }

    p=0;
    cout<<"Enter any integer?";
    cin>>n;

    for(i=0; i<=4; i++)
    {
        if(n==a[i])
        {
            p=i+1;
        }
    }
    if(p==0)
    {
        cout<<"value not found"<<endl;
    }
    else
    {
        cout<<"Value found at position = "<<p;
    }
}