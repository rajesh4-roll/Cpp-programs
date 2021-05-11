/*
    File: class_memr_fun_argument.cpp
    -----------------------------------------------
    This program demos the use of class and passing 
    the agruments to member function of that class.
*/
#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
class emp{
    private:
        int emp_id;
        char emp_name[20];
        float emp_salary;
    public:
        int get_emp(int id, char name[20],float salary){
            emp_id = id;
            strcpy(emp_name,name);
            emp_salary = salary;
            return 0;
        }
        int show_emp(){
            cout << "ID: " << emp_id << endl;
            cout << "Name: " << emp_name << endl;
            cout << "Salary: " << emp_salary << endl;
            return 0;
        }
};
int main(){
    emp e1;
    e1.get_emp(10,"rajesh",1000);
    e1.show_emp();
    getch();
    return 0;
}
