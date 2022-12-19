#include<iostream>
using namespace std;

int main()
{
    int i, u, p, m, t, arr[4] = {4,19,1,13};

    for(u=0; u<3; u++)
    {
        m=arr[u];
        for(i=u; i<=3; i++)
        {
            if(m>arr[i])
            {
                m=arr[i];
                p=i;
            }
        }
        t=arr[p];
        arr[p] = arr[u];
        arr[u]=t;
    }
    cout<<"Sorted values are "<<endl;
    for(i=0; i<=3; i++)
    {
        cout<<arr[i]<<endl;
    }
}