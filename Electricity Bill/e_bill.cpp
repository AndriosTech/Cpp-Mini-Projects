#include<iostream>
using namespace std;

int main()
{
   float units, bill, tax;

   cout<<"Enter units"<<endl;
   cin>>units;

   if(units > 300)
   {
   bill = units * 3.5;
   tax = bill * 0.05;
   bill += tax;

   }
   if(units <= 300)
   bill = units * 3.0;

   cout<<"electricity bill = "<<bill;
}