/**
 *	File: all_constructor.cpp
 * 	-----------------------------------------
 * 	This program show the all constructor uses
 **/
#include <iostream>
using namespace std;
class complex
{
	float real_part, imaginary_part;
	public:
		complex(){}
		complex(const complex&c1)
		{
			real_part = c1.real_part;
			imaginary_part = c1.imaginary_part;
		}
		complex(float x,float y):real_part(x),imaginary_part(y){}
		int get_data();
		int show_data() const;
};
int main()
{
	complex c1(3,4);
	c1.show_data();
	complex c2;
	cout << "Input the real and imigainary part" << endl;
	c2.get_data();
	c2.show_data();
	complex c3 = c1;
	c3.show_data();
	return 0;
}
int complex::get_data()
{
	cin >> real_part >> imaginary_part;
	return 0;
}
int complex::show_data() const
{
	cout << real_part <<" + i"<<imaginary_part<<endl;
	return 0;
}

