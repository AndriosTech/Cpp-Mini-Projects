#include<iostream>
using namespace std;

int main()
{
    float d, sum;
    d = 1.0;
    sum = 0.0;

    while(d <= 45)
    {
        sum = sum + 1.0/d;
        d++;
    }
    cout<<"sum is "<<sum<<endl;
}