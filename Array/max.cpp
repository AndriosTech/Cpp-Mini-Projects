#include<iostream>
using namespace std;

int main()
{
    int a[5], i, max;

    for(i=0; i<=4; i++)
    {
        cout<<"Enter values"<<endl;
        cin>>a[i];
    }

    cout<<endl;
    max = a[0];

    for(i=0; i<=4; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    cout<<"The maximum value is ="<<max<<endl;
}