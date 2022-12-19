#include<iostream>
using namespace std;

int main()
{
    int a[4] = {4,1,3,19};
    int i, u, t;

    for(u=3; u>=1; u--)
    {
        for(i=0; i<u; i++)
        {
            if(a[i] > a[i+1])
            {
                t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
            }
        }
    }
    cout<<"Sorted values are = "<<endl;
    for(i=0; i<=3; i++)
    {
        cout<<a[i]<<endl;
    }
}