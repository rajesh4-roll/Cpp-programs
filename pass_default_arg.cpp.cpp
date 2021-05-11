/*
    File: pass_default_arg.cpp
    -----------------------------------------
    This program demos the use of default parameter
    function passing which also clears the concept
    about polymorphism in OOP concept.

*/
#include <iostream>
#include <conio.h>
using namespace std;
int sum(int x = 1, int y = 1, int z = 1){
    return x + y + z;
}
int main(){
    int a = 10,b = 20 ,c = 30;
    cout << "enter three values: " << endl;
    // cin >> a >> b >> c;
    cout << "sum(a, b, c): " << sum(a,b,c) << endl;
    cout << "sum(a, b): " << sum(a,b) << endl;
    cout << "sum(a): " << sum(a) << endl;
    cout << "sum(): " << sum() << endl;
    return 0;
}