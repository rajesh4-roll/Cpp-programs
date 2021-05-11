/*
    File: class_pass_cl.obj.cpp
    -------------------------------------------
    Passing the class object into a member
    function of that class. A comparision 
    program demonstrates this concept.
*/
#include <iostream>
#include <conio.h>
using namespace std;
class test{
    int a;
    public:
    int get_a();
    int show_a();
    int biggest(test t2);
};
int main(){
    test t1,t2;
    t1.get_a();
    // t1.show_a();
    t2.get_a();
    // t2.show_a();
    cout << "Biggest: " << t1.biggest(t2) << endl;
    return 0;
}
int test::get_a(){
    cout << "Enter a number: ";
    cin >> a;
    return 0;
}
int test::show_a(){
    cout << a<<endl;
    return 0;
}
int test::biggest(test t2){
    if (a > t2.a)
        // cout << "biggest: " <<a<<endl;
        return a;
    else
        // cout << "biggest: " << t2.a << endl;
        return t2.a;
    return 0;
}
