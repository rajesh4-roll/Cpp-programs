/*
    File: static data members.cpp
    -----------------------------------------------------
    Use of static data members in class funtion 
*/
#include <iostream>
#include <conio.h>
using namespace std;

class test
{
public:
    static int a;
    int show(){
        cout << "a = " << a  << endl;
        return 0;
    }
};
int test::a = 10;

int main(){
    /* code here */
    test::a = 100;
    cout << "a = " << test::a << endl;
    test t;
    cout << "calling by show fun from class: --<>--" << endl;
    t.show();
    getch();
    return 0;
}
