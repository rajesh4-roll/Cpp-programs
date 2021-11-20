/*
    File: check.cpp
    -------------------------------------------------------------
    This program demos the use of exception handeling in C++
*/
#include<iostream>
using namespace std;


int main()
{
    int x,y;
    try{
        cout<<"Enter first value: ";cin>>x;
        cout<<"Enter second value: ";cin>>y;
        if(y == 0)
            throw y;
        else
            cout << x/y  << endl;
    }
        catch(...)
    {
        cout << "Cannot be divisible" << endl;
    }
    return 0;
}