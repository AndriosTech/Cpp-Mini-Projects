#include<iostream>
using namespace std;

int main()
{
    int a[5], b[5], s[5], i;

    for(i=0; i<=4; i++)
    {
        cout<<"Enter value in element"<<endl;
        cin>>a[i];
    }
    cout<<endl;
    for(i=0; i<=4; i++)
    {
        cout<<"Enter value in element"<<endl;
        cin>>b[i];
    }
    cout<<endl;
    for(i=0; i<=4; i++)
    {
        s[i] = a[i]+b[i];
        cout<<"The Sum of "<<a[i]<<" and "<<b[i]<<"="<<s[i]<<endl;
    }

}