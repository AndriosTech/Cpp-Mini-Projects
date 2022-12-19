#include<iostream>
using namespace std;

int main()
{
    int sum(int);
    int x;
    cout<<"Enter number"<<endl;
    cin>>x;
    cout<<"The sum is : "<<sum(x);
}
int sum(int x)
{
    if(x!=0)
    {
    return x+sum(x-1);          //A function calling itself this is called recursion of function
    }
}