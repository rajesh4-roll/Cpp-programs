/*
	File: pure_virtual_function.cpp
	-----------------------------------------------------
	 This program introduces the use of pure virtual function
	 inside the inheritannce concept.
*/
#include <iostream>
using namespace std;
#define PI 3.1415926535
class shape
{
	protected:
		float height,length,side,radius,breath,base;
	public:
		virtual float area() = 0;
};

class rectangle:public shape
{
	public:
		int get_dim()
		{
			cin >> length >> breath;
			return 0;
		}
		float area()
		{
			return length * breath;
		}
};

class triangle:public shape
{
	public:
		int get_dim()
		{
			cin >> base >> height;
			return 0;
		}
		float area()
		{
			return 0.5 * base * height;
		}

};

class circle:public shape
{
	public:
		int get_dim()
		{
			cin >> radius;
			return 0;
		}
		float area()
		{
			return PI * radius * radius;
		}
};

class square:public shape
{
	public:
		int get_dim()
		{
			cin >> side;
			return 0;
		}
		float area()
		{
			return side * side;
		}
};

int main()
{
	rectangle r;
	triangle t;
	circle c;
	square s;
	cout << "Enter Height and Base of triangle: ";
	t.get_dim();
	cout << "Triangle area: " << t.area()  << endl;
	cout << "Enter Length and Breath of rectangle: ";
	r.get_dim();
	cout << "Rectangle area: " << r.area() << endl;
	cout << "Enter radius of circle: ";
	c.get_dim();
	cout << "Area of circle: "<< c.area()  << endl;
	cout << "Enter side Length: ";
	s.get_dim();
	cout << "Area of square: "<<s.area() << endl;
	return 0;
}
