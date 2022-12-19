#include<iostream>
using namespace std;

int main()
{
    int num, m, res;
    num = 1;
    cout<<"enter number for pahara"<<endl;
    cin>>m;

    while(num <= 10)
    {
        res = m * num;
        cout<<num<<" x"<<m<<" = "<<res<<endl;
        num = num + 1;
        


    }
}