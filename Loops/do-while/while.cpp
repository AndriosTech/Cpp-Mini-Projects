#include<iostream>
using namespace std;

int main()
{
    int sum, num;

    sum = 0;
    num = 1;

    while(num <= 10)
    {
        sum = sum + num;
        cout<<num<<endl;
        num = num + 2;
    }
    cout<<"sum is "<<sum<<endl;
}