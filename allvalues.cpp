#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    
    cout<<"Enter the first number";
    cin>>a;
    cout<<"Enter the second number";
    cin>>b;
    cout<<"Enter the third number";
    cin>>c;

    if(a == b)
    {
        if(a == c)
        {
            cout<<"All values are equal";
        }
        else
        {
            cout<<"these values are different";
        }
       
    }
    else
    {
        cout<<"these values are different";
    }
}