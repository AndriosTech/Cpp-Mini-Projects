#include<iostream>
using namespace std;

int main()
{
    int s1, s2, s3, avg;

    cout<<"Enter subject 1 marks: ";
    cin>>s1;
    cout<<"Enter subject 2 marks: ";
    cin>>s2;
    cout<<"Enter subject 3 marks: ";
    cin>>s3;

    avg = (s1+s2+s3)/3;

    if(avg > 33)
    {
        if(avg > 50)
        {
            if(avg > 80)
            {
                cout<<"Grade = 'A'";
            }
            else
            {
                cout<<"Grade = 'B'";
            }
        }
        else
        {
            cout<<"Grade = 'C'";
        }
        
        
    }
    else
    {
        cout<<"Grade = 'F'";
    }
}