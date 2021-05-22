/*
    File: friend function.cpp
    -----------------------------------------------------
    This program shows the example of friend function. 
    frien function is non member function of class that
    can access the private, protected or public, wherever
    it is defined. in another word this is like a friend 
    can access to use the things
*/
#include <iostream>
using namespace std;
class rajesh2;
class rajesh1
{
private:
    int a;
public:
    int get_a(){
        cout << "Enter a value: " ;
        cin >> a;
        return 0;
    }
    friend int big(rajesh1,rajesh2);
};
class rajesh2
{
private:
    int b;
public:
    int get_b(){
        cout << "Enter b value: ";
        cin >> b;
        return 0;
    }
    friend int big(rajesh1, rajesh2);
};

int main(){
    /* code here */
        rajesh1 r1;
        rajesh2 r2;
        r1.get_a();
        r2.get_b();
        big(r1,r2);
    return 0;
}
int big(rajesh1 r1, rajesh2 r2){
    if (r1.a > r2.b)
        cout << "a is big";
    else if(r2.b > r1.a)
        cout << "b is big";
    else
        cout << "Both are same";
    return 0;
}
