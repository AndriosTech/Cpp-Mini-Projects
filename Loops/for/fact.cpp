#include<iostream>
using namespace std;

int main()
{
    int fact, num;
    cout<<"enter value"<<endl;
    cin>>num;

    for(fact = 1; num >= 1; num--)
    {
        fact = fact * num;

    }
    cout<<"factorial is "<<fact;
}