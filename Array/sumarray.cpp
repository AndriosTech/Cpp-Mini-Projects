#include<iostream>
using namespace std;

int main()
{
    float a[5], b[5], c[5];

    int i;

    cout<<"enter values in first array"<<endl;
    for(i=0; i<=4; i++)
    {
        cout<<"enter values in element"<<endl;
        cin>>a[i];
    }

    cout<<"enter values in second array"<<endl;
    for(i=0; i<=4; i++)
    {
        cout<<"enter values"<<endl;
        cin>>b[i];
    }

    cout<<"First + second = Sum"<<endl;
    for(i=0; i<=4; i++)
    {
        c[i] = a[i] + b[i];
        cout<<a[i]<<" + "<<b[i]<<" = "<<c[i]<<endl;
    }
}