#include<iostream>
using namespace std;

int main()
{
    int abc[2][3], r, c;
    
    cout<<"Input data into table"<<endl;
    r=0;

    while(r<=1)
    {
        c=0;
        while(c<=2)
        {
            cout<<"Enter value in row=";
            cout<<r<<" colomn = "<<c<<" ";
            cin>>abc[r][c];
            c=c+1;

        }
        r=r+1;
    }
    cout<<"Printing data from table"<<endl;
    r=0;
    while(r<=1)
    {
        c=0;
        while(c<=2)
        {
            cout<<abc[r][c]<<"\t";
            c=c+1;

        }
        cout<<endl;
        r=r+1;
    }
}