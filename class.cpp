/*
    File : class.c++
    -----------------------------------
    This program introduces the concept of class.
    in this program i am playing with the class 
    and its members (ie data members and members
    functions).

*/
#include <iostream>
using namespace std;

#define SQUARE(x) x*x

int sqr(int x){
    return x*x;
};

class student{
    private:
        int id;
        char name[20];
        float fee;
    public:
        void input_id(){
            cout << "Enter id: ";
            cin >> id ;
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter fee: ";
            cin >> fee ;
        }
        void ouput_id(){
            cout << " ID "<< " Name " << " Fee " << endl;
            cout << id << name << fee;
        }
        int hello();
};

int student::hello(){
    cout << "Hello, World!"<< endl;
    return 0;
}

int main(){
    student rajesh;
    // rajesh.input_id();
    // rajesh.ouput_id();
    rajesh.hello();

    cout << "sqr(3+2): " << sqr(3+2) << endl;
    cout << "SQUARE(3+2): " << SQUARE(3+2) << endl;
    return 0;
}   
