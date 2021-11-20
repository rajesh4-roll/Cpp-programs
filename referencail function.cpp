/*
    File: check.cpp
    -------------------------------------------------------------
    This program constructs the function that takes two arguments
    as reference and assign the average of two arguments to the smaller
    one and return that by reference.
*/
#include<iostream>
using namespace std;

int &smaller(int&a,int&b)
{
    if(a < b)
        return a;
    return b;
}

int main()
{
    int a = 2, b = 4;
    cout <<" before assigning." << endl;
    cout << "a = "<<a<<" b = "<<b  << endl;
    smaller(a,b);
    float avg = (a+b)/2;
    smaller(a,b) = avg;
    cout << "a = "<<a<<" b = "<<b  << endl;
    return 0;
}