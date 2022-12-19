#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int i,even,odd,count=0;

    for(i=0; i<5; i++)
    {
        cout<<"Enter numbers"<<endl;
        cin>>arr[i];
    }

    for(i=0; i<5; i++)
    {
        if(arr[i] % 2==0)
        {
            count++;

        }
    }

    cout<<"Total even numbers are:"<<count<<endl;
    cout<<"Total odd numbers are:"<<5-count<<endl;
}