// conversion of decimal to other system using do-while loop

#include<iostream>
using namespace std;

int main()
{
    int d, octal;

    cout<<"Enter decimal number"<<endl;
    cin>>d;

    octal = 0;

    do
    {
        octal = d%8;            // replace just 8 with other required system you want to convert
        d = d/8;
        cout<<octal;

    }
    while(d >= 1);
}