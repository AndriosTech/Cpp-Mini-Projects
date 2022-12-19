#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    int randomnum, guess;

    srand((unsigned) time(0));   // for generate a true random number

    randomnum = (rand() % 100) + 1;         // it means values from 1-100

    cout<<randomnum; 
}

