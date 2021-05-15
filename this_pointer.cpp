/*
    File: this pointer.cpp
    -----------------------------------------------------
    This program demos how to use of this pointer in our
    program function
*/
#include <iostream>
using namespace std;

class point
{
private:
    int x, y;
public:
    int get_point(int x, int y);
    int show_point();
    int sum(int x,int y);
};

int main(){
/* code here */
    point p,q;
    p.get_point(10,2);
    q.get_point(12,5);
    cout << "Point p is " << p.show_point() << endl;
    cout << "point q is " << q.show_point() << endl;
return 0;
}
int point::get_point(int x, int y){
    this->x = x; // this pointer 
    this->y = y;
    return 0;
}
int point::show_point(){
    cout << "(" << x << "," << y << ")";
    return 0;
}
