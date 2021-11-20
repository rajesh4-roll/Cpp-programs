/*
    File: virtual destructor.cpp
    -------------------------------------------------------------
    This program does the demons the use of virtual destructor in
    base and derived classes.
*/
#include<iostream>
using namespace std;
class Vehicle{
    public:
        Vehicle(){
            cout << "Constructor of Vehicle invoked" << endl;
        }
        virtual void showdata(){
            cout << "I am Vehicle." << endl;
        }
        virtual ~Vehicle(){
            cout << "Destructor of Vehicle invoked" << endl;
        }
};
class Car:public Vehicle{
    public:
        Car(){
            cout << "Constructor of Car invoked" << endl;
        }
        void showdata(){
            cout << "I am Car." << endl;
        }
        ~Car(){
            cout << "Destructor of Car invoked" << endl;
        }
};
int main(){
    Vehicle *Vp;
    cout << "Base class uses pointer to pointing base class object" << endl;
    Vp = new Vehicle;
    Vp->showdata();
    delete Vp;
    cout << "Base class uses pointer to pointing derived class object" << endl;
    Vp = new Car;
    Vp->showdata();
    delete Vp;
    return 0;
}
