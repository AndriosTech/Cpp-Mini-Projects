#include<iostream>
using namespace std;

int main()
{
    int fact, num;

    cout<<"enter number"<<endl;
    cin>>num;
    fact = 1;

    do
    {
        fact = fact * num;
        num--;
        
    }
    while(num >= 1);

    cout<<"the factorial of a given number is= "<<fact;
}