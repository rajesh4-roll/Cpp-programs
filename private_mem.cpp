/*
    File: private member accesss.cpp
    -----------------------------------------------------
    This program shows how to access or call private functions
    in cpp using oop concept.
*/
#include <iostream>
using namespace std;

class sample{
private:
    int a,b;
    int get_point();
public:
    int get_xy();
};

int main(){
/* code here */
    sample s;
    s.get_xy();
return 0;
}
int sample::get_point(){
    cout << "Enter two values: " << endl;
    cin >> a >> b;
    return 0;
}
int sample::get_xy(){
    get_point();
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
