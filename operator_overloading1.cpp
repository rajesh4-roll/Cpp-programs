/*
    File: operator overloading.cpp
    -----------------------------------------------------
    This is the operator overloading by using class and 
    add two srings by this operator overloading concept.
    for eg
    string1 = "sita" + "ram"
    string1 = "sitaram"

*/
#include <iostream>
#include<string.h>
using namespace std;
class test{
    private: 
        char st[100];
    public:
        inline int get_name();
        int show_name();
        test operator + (test t2);
};

int main(){
    /* code here */
    test t1, t2, t3;
    cout << "Enter string1: ";
    t1.get_name();
    cout << "Enter string2: ";
    t2.get_name();
    t3 = t1 + t2;
    t3.show_name();
    return 0;
}
inline int test::get_name(){
    cin >> st;
    return 0;
}
int test::show_name(){
    cout << st;
    return 0;
}
test test::operator +(test t2){
    test t3;
    strcpy(t3.st,st);
    strcat(t3.st,t2.st);
    return t3;
}
