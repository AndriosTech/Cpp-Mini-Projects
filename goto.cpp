#include<iostream>
using namespace std;

int main()
{
    int c;
    abc:
    cout<<c<<endl;
    c++;

    if(c<10) goto abc;
}