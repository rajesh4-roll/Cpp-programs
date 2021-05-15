/**
 * File: memeber function with class type return value(object).cpp
 * -----------------------------------------------------------------
 * This program demos to pass the class type object in it member function
 * and returns the class type value. for exaple a point is demonstrated to
 * show the use of this concept.
 **/

#include <iostream>
#include <conio.h>
using namespace std;
class point
{
private:
    int x,y;
public:
    int _get_point();
    int _show_point();
    point sum(point q);
};

int main(){
    point p,q,r;
    cout << "Enter 1st point value: " << endl;
    p._get_point();
    cout << "Enter 2nd point value: " << endl;
    q._get_point();
    r = p.sum(q);
    cout << "Sum of two points is: " << endl;
    r._show_point();
    return 0;
}

int point::_get_point(){
    // cout << "Enter a point values: " << endl;
    cin >> x >> y;
    return 0;
}

int point::_show_point(){
    cout << "(" << x << "," << y <<")" << endl;
    return 0;
}
point point::sum(point q){
    point r;
    r.x = x + q.x;
    r.y = y + q.y;
    return r;

}

