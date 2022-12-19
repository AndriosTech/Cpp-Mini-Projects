#include<iostream>
using namespace std;

int main()
{
    int fibo(int);
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<fibo(i)<<" ";
    }
}
int fibo(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}