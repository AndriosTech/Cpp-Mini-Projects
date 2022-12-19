#include<iostream>
using namespace std;

int main()
{
    int odd, sum;
    sum = 0;
    
    for(odd = 1; odd<=10; odd += 2)
    {
        cout<<odd<<" + "<<sum<<" = ";
        sum = sum + odd;
        cout<<sum<<endl;
        

    }
    cout<<"sum is "<<sum;
}