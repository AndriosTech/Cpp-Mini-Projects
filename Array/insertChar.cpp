#include<iostream>
using namespace std;

int main()
{
    char array[20], temp, insert;
    int index;

    cout<<"Enter string"<<endl;
    cin>>array;

    cout<<"Enter character you want to insert"<<endl;
    cin>>insert;

    cout<<"Enter index"<<endl;
    cin>>index;

    for(int i=index; array[i] != '\0'; i++)
    {
        temp = array[index+1];
        array[index] = insert;
    }

    for(int i=0; array[i] != '\0'; i++)
    {
        cout<<array[i];
    }
}