/*
    File: friend class.cpp
    -----------------------------------------------------
    This program demos the use of friend class and friend 
    class are those class that can access the preivate members
    , enabling reusability featture of the OOP's concept.
*/
#include <iostream>
using namespace std;

class test1{ // container class
private:
    int a ,b;
public:
    friend class test2;
    int get_elements();  
};

class test2 // contained class
{
public:
    int show_elements(test1);
};

int main(){
/* code here */
    test1 a;
    cout << "Elements enterd in class1 "<<endl;
    a.get_elements();
    test2 b;
    cout << "Elements out from class2" << endl;
    b.show_elements(a);

    return 0;
}
int test1::get_elements(){
    cout << "Enter two values: ";
    cin >> a >> b;
    return 0;
}
int test2::show_elements(test1 t1){
    cout << t1.a << " " << t1.b << endl;
    return 0;
}
