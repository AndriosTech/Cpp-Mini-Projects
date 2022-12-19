#include<iostream>
using namespace std;

int main()
{
    int a, b;
    char op;

    cout<<"Enter the first number, then the opertaor , then second number"<<endl;
    cin>>a>>op>>b;

    switch(op)
    {
        case '+':
            cout<<"Addition="<<(a+b)<<endl;
            break;
        case '-':
            cout<<"Subtraction ="<<(a-b)<<endl;
            break;
        default:
        cout<<"invalid input";
    }
}