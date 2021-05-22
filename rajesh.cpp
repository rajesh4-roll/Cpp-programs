/*
    File: filename.cpp
    -----------------------------------------------------
    Description here about the program to write.
*/
#include <iostream>
using namespace std;

int main(){
/* code here */
    int x = 1237;
    // x values in different number system
    cout << "x in decimal: " << x << endl;
    cout << "x in octal: " << oct << x << endl;
    cout << "x in hexadecimal: " << hex << x << endl;
    //x values in different numbr systems
    cout << "Output in base formate --->"<< endl<<endl;
    cout << "x in decimal: " << x << endl;
    cout << "x in octal: " << showbase << oct << x << endl;
    cout << "x in hexadecimal: " << showbase << hex << x << endl;

return 0;
}