#include<iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout<<"Enter first number";
    cin>>a;
    cout<<"Enter second number";
    cin>>b;
    cout<<"Enter third number";
    cin>>c;

    if(a>b)
    {
        if(a>c)
        {
        cout<<"First number is greatest";
        }
        else
        {
        cout<<"3rd number is greatest";
        }
    }
   else if (b>c)
   {
       cout<<"2nd number is greatest";

   }
   else
   cout<<"Third number is greatest";
}