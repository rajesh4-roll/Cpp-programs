/**
 *	File: const_cast.cpp
 * --------------------------------------------------------
 * This program use const_cast to initile the one value to 
 * other. const_cast come in handy where we can use pointer 
 * and to copy any constant value address to that pointer.
 * To remove constantness of any constant.
 **/
#include <iostream>
using namespace std;
int main()
{
	const int a = 10;
	int *b = const_cast<int*>(&a);
	cout << "a = " << a << endl << "b = " << *b << endl;
	return 0;
}

