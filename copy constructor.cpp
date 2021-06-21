/*
    File: copy constructor.cpp
    -----------------------------------------------------
    This program demos the use of copy constructor -> copy
    constructor is 
*/
#include <iostream>
using namespace std;

class sample{
private:
    int a,b;
public:
    sample(int a,int b) { // parametrized constrictor
        this->a = a;
        this->b = b;
    }
    sample(const sample &old){ // copy constructor
        a = old.a;
        b = old.b;
    }
    ~sample() {} // destructor
    int show();
};

int main(){
    /* code here */
    sample s1(10,20);
    sample s2(s1);
    s2.show();
    return 0;
}
int sample::show(){
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
