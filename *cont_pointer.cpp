/*
    File: constant pointer.cpp
    -----------------------------------------------------
    the use of constant pointer by using const keyword
*/
#include <iostream>
using namespace std;

int main(){
    /* code here */
    int num = 10, var = 100;
    int *ptr1;
    ptr1 = &num;
    ptr1 = &var;
    ptr1++;
    const int *ptr2 = &num;
    ptr2 = &var;
    ++ptr2;
    cout << var << endl << ptr2 << endl << *ptr2 << endl;
    cout << num  << endl;
    return 0;
}