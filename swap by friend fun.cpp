/*
    File: swap by friend fun.cpp
    -------------------------------------------------------------------
    This program swap the two class data memners using friend function.
*/
#include<iostream>
using namespace std;

class rajesh;
class sharma
{
    int srma;
    public:
        sharma():srma(5){}
        void show();
        friend void swap(rajesh&, sharma&);
};
class rajesh
{
    int raj;
    public:
        rajesh():raj(8){}
        void show();
        friend void swap(rajesh&, sharma&);
};
void swap(rajesh&r, sharma&s)
{
    int temp;
    temp = r.raj;
    r.raj = s.srma;
    s.srma = temp;
}

int main()
{
    rajesh r;
    sharma s;
    r.show();
    s.show();   

    swap(r,s);

    r.show();
    s.show();
    return 0;
}
void sharma::show()
{
    cout << "sharma = " << srma  << endl;
}
void rajesh::show()
{
    cout << "rajesh = " << raj  << endl;
}