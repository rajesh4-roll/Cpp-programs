/**
 *	File: const.cpp
 * 	----------------------------------------------------
 * 	This program intilize the constant private data member
 * 	declared in the class and how to initilize the value 
 * 	using default constructor.
 **/
#include <iostream>
using namespace std;
class point
{
	const int a;
	public:
		point():a(10){}
		inline int show() const
		{
			//a = 12; // generates error read only function
			cout << "a = " << a << endl;
			return 0;
		}
		
};
int main()
{
	point p;
	p.show();
	return 0;
}
