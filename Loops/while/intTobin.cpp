#include<iostream>
using namespace std;


int main()
{
    int num, bin;
    cout<<"enter integer"<<endl;
    cin>>num;

    while(num >= 1)
    {
        bin = num % 2;   // to convert the integer number into octal divide bin and num by 8, similarly if your desired system is
        num = num / 2;   // x-system divide bin and num by x
        cout<<bin;
    }

    int  rem, arr[10], i=0, tot=0;
    
    while(bin !=2)
    {
        rem = bin%2;
        arr[i] = rem;
        num = num/2;
        i++;
        tot++;
    }
    cout<<"\nReverse = ";
    for(i=0; i<tot; i++)
        cout<<arr[i];
    cout<<endl;
    

   

}