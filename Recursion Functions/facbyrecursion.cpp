#include<iostream>
using namespace std;

int main()
{
    int fact(int);
    int n;
    cout<<"Enter number:"<<endl;
    cin>>n;
    fact(n);
    cout<<"The factorial is: "<<fact(n);
}
int fact(int x)
{
    if(x<1)
    {
        return 1;
    }
    else
    {
        return x*fact(x-1);
    }
}