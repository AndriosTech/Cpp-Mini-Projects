#include<iostream>
using namespace std;

void Salary_change(int &s)
{
    s=30000;
    cout<<"value inside function is: "<<s<<endl;

}

int main()
{
    int sal = 27000;
    Salary_change(sal);
    cout<<"Value inside main"<<sal<<endl;
    return 0;

}
