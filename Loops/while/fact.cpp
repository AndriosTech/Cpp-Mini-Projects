#include<iostream>
using namespace std;

int main()
{
    double fact, num;

    fact = 1;
    cout<<"enter value"<<endl;
    cin>>num;

    while(num >= 1)
    {
        fact = fact * num;
        num = num - 1;

    }
    cout<<"factorial of entered number is = "<<fact<<endl;
}