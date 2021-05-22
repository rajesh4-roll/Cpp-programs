/*
    File: floor.cpp
    -----------------------------------------------------
    Description here about the program to write.
*/
#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    /* code here */
    float number1 = 0.335, number2 = 234.2542, number3 = -3.316992, number4 = -0.432;
    cout << "values are <--||-->" << endl;
    cout << "Number1 correct upto 0 decimals " << fixed << setprecision(0) << number1  << endl;
    cout << "Number2 correct upto 1 decimals " << fixed << setprecision(1) << number2  << endl;
    cout << "Number3 correct upto 2 decimals " << fixed << setprecision(2) << number3  << endl;
    cout << "Number4 correct upto 3 decimals " << fixed << setprecision(3) << number4  << endl;
    return 0;
}