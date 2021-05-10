/*
    File: referece.cpp
    ------------------------------------------------
    This program uses the referece data type and 
    provide the examples. This program also conveys
    the concept of use of direct pointers.
    for examples:
    1. swapping two values

*/
#include <iostream>

using namespace std;
int swap(int &a, int &b);

int main(){
    cout << "Swapping the two numbers" << endl;
    int a = 10, b = 20;
    cout << a <<"\t" << b << endl;
    swap(a,b);
    cout << a <<"\t" << b << endl;
    return 0;
}
int swap(int &a, int &b){
    int temp = a;
    a = b ;
    b = temp;
    return 0;
}