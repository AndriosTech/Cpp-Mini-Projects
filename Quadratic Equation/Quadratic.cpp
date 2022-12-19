#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float a, b, c, r1, r2, disc, real, imag;

    cout<<"Enter value of a";
    cin>>a;
    cout<<"Enter value of b";
    cin>>b;
    cout<<"Enter value of c";
    cin>>c;

    disc = b*b -4.0*a*c;

    if(disc < 0)
    {
        real = -b/(2.0*a);
        imag = sqrt (-disc)/(2.0*a);
        cout<<"Roots are imaginary "<<endl;
        cout<<"Root 1"<<real<<" +i("<<imag<<")"<<endl;
        cout<<"Root 2"<<real<<" -i("<<imag<<")"<<endl;

    }

    if (disc == 0)
    {
        r1 = r2 = -b/(2.0*a);
        cout<<"roots are real and equal"<<endl;
        cout<<"Root 1"<<r1<<endl;
        cout<<"Root 2"<<r2<<endl;

    }

    if (disc > 0)
    {
        cout<<"roots are real and different"<<endl;
        r1 = -b/(2.0*a) + sqrt(disc)/(2.0*a);
        r2 = -b/(2.0*a) - sqrt(disc)/(2.0*a);
        cout<<"Root 1"<<r1<<endl;
        cout<<"Root 2"<<r2<<endl;

    }
}