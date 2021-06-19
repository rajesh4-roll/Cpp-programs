/*
    File: constructor overloading .cpp
    -----------------------------------------------------
    This program is to use polymorphic constructor and calling
    one constructor in another constructor. The program below
    is an example to use this idea behind the code
*/
#include <iostream>
#include <string.h>
using namespace std;

class stu {
private:
    char name[20], course[20];
    float fee;
public:
    stu(char name[20], char course[20]) { // parametrized constructor
        strcpy(this->name,name);
        strcpy(this->course,course);
        fee = 0;
    }    
    
    stu(char name[20], char course[20],float fee){
        stu(name, course); // calling construcotor
        //strcpy(this->name, name);
        //strcpy(this->course, course);
        this->fee = fee;
    }
    int show();
};

int main(){
/* code here */ 
    stu s1("rajesh","c++");
    stu s2("rajesh","c++",5000);
    s1.show();
    s2.show();
    
	return 0;
}
int stu::show(){
    cout << "Name: " << name << endl;
    cout << "Course: " << course << endl;
    cout << "Fee: " << fee << endl;
    return 0;
}
