#include<iostream>
using namespace std;

int main()
{
    void swapit(int,int);
    int a = 50;
    int b = 80;
    swapit(a,b);
    cout<<"value of a = "<<a<<endl;
    cout<<"value of b = "<<b<<endl;
}
void swapit(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}