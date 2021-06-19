/*
    File: const function.cpp
    -----------------------------------------------------
    This program show the use of const function in our program
    and cont function can only access the class data member but 
    cannot modify the data members.
*/
#include <iostream>
#include <cmath>
using namespace std;
class point
{
	private:
		int x,y;
	public:
		point(int x,int y):x(x),y(y)
		{
			//this->x = x;
			//this->y = y;
		}
		int input();
		int show() const;
};
int main()
{
	point p(3,4);
	cout << "Enter a point "<<endl;
	//p.input();
	p.show();
	return 0;
}
int point::input()
{
	cin >> x >> y;
	return 0;
}
int point :: show() const
{
	int sum;
	sum = sqrt(pow(x,2)+pow(y,2));
	cout << sum<<endl;
	return 0;
}
