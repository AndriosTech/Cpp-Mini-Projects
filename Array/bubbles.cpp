#include<iostream>
using namespace std;

int main()
{
    int i,u,t, arr[4] = {4,19,1,3};

    for(u=3; u>=1; u--)
    {
        for(i=0; i<u; i++)
        {
            if(arr[i] > arr[i+1])
            {
                t=arr[i];
                arr[i]=arr[i+1];
                arr[i+1] = t;
            }
        }
    }
    cout<<"Sorted values are"<<endl;
    for(i=0; i<=3; i++)
    {
        cout<<arr[i]<<endl;
    }
}