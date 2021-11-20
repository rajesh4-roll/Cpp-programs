/*
    File: check.cpp
    -------------------------------------------------------------
    This program does conversin using namespace in C++
*/
#include<iostream>
#include<iomanip>
using namespace std;

namespace convert{
    void volume(int &a){
        a = a*100;
    }
}
int main(){
    int meter;
    cout << "Enter a meter: ";meter = 10;
    convert::volume(meter);
    cout << "The conversion is: "<< meter  << endl;
    return 0;
}