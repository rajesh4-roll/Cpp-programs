/*
    File: constructor with default aruguments.cpp
    -----------------------------------------------------
    This program use to ititilized the defalut value in the
    conatructo
*/
#include <iostream>
using namespace std;

class test
{
private:
    int a,b,c;
public:
    test(int a = 10, int b = 20 , int c = 30) { // constructor with default arguments
        this->a = a;
        this->b = b;
        this->c = c;
    }
    int show();
    
};

int main(){
    /* code here */
    test a(4,5,6);
    a.show();
    return 0;
}

int test::show(){
    cout << "(a, b, c) : " << "(" << a << "," << b << "," << c << ")" << endl;
    return 0;
}
