#include<iostream>
using namespace std;

int main()
{
    int x,y;
    int sum=0;
    cout<<"Enter first number"<<endl;
    cin>>x;
    cout<<"Enter second number"<<endl;
    cin>>y;

    for(int i=1; i<=x; i++)
    {
        sum += y;
    }
    cout<<"product is="<<sum;
}