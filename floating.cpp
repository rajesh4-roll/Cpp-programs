/*
    File: floating.cpp
    -----------------------------------------------------
    Description here about the program to write.
*/
#include <iostream>
using namespace std;

int main(){
    /* code here */
    double x = 1237;
    double y = 123324435.3456;
    // using fixed (default) and showpoint manupulators
    cout << " x in fixed_point formate: " << x << endl;
    cout << "x in fixed_point formate: " << showpoint << x << endl;
    //using scientific manupulators
    cout << " y in scientific formate: " << scientific << y<<endl;
    return 0;
}