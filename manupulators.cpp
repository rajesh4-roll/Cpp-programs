/**
 *	File: manupulators.cpp
 * ------------------------------------------
 * This program introduces the use of
 * manupulators. manupulators are availabe in 
 * #iomanip library
 * for exaples : -
 * setw(10),setiosflags(ios::left) and so on.
**/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	cout << setiosflags(ios::scientific) << 1000 << endl;
	cout << setiosflags(ios::showpoint) <<22/7 << endl;
	cout << setiosflags(ios::dec) << 0xa << endl;
	cout << setw(10) << setfill('*') << "sharma" << endl;
	cout << setw(10) << setiosflags(ios::left) << "rajesh" <<endl;
	return 0;
}
