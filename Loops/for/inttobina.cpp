/*
C++ outputReversing
*/

#include<iostream>
using namespace std;

int main()
{
    int d, i=0;     //HT added i
    int bin[32];    //HT changed to an array

    cout<<"Enter decimal value"<<endl;
    cin>>d;
    
    do
    {
        bin[i++] = d%2;    // HT changed to array with post-increment
        d = d/2;           // binary
        
    }
    while(d>=1);

    for (    ;i>0    ;){    //HT added another loop
        cout<<bin[--i];     //HT use pre-decrement
    }

// this is the code, here binary result for decimal value to be reversed because if i entered 8 in decimal it gives me 0001 in binary instead of 1000... so i want just to reverse the output of binary. please help me
    return 0;
}