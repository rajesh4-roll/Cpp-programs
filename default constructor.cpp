/*
    File: default constructor.cpp
    -----------------------------------------------------
    This program shows how to the constructor and initile 
    the value at initial. there are 3 types of constructor
    1. copy constructor
    2. default constructor
    3. parametrized constructor
*/
#include <iostream>
using namespace std;

class constructor
{
private:
    int a;
public:
    constructor() { // default constructor
        a = 10 ;
    }
    int show_a();
};

int main(){
/* code here */
    constructor c;
    c.show_a();
return 0;
}
int constructor::show_a(){
    cout << "a = " << a <<endl;
    return 0;
}
