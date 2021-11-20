/*
    File: rtti.cpp
    -------------------------------------------------------------
    This program demos the down casting in C++ using dynamic cast
    and dynamic cast enables for down casting and use the members
    of base by the derived class
*/
#include<iostream>
using namespace std;
class B { 
    virtual void fun(){}
    public:
        void print(){
        cout <<"\nrajesh";
    }
};
class D: public B {};
  
int main()
{
    B *b = new D;
    D *d = dynamic_cast<D*>(b);
    if(d != NULL)
        cout<<"works";
    else
        cout<<"cannot cast B* to D*";
    d->print();
    getchar();
    return 0;
}