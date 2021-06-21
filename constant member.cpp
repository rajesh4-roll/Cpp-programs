#include <iostream>
#include <conio.h>
using namespace std;

class test
{
	int a;
	const int x;
public:
	test():x(3){}
	void input()
	{
		cin >> a;
	}
	void show()
	{
		cout << a << x << endl;
	}
};
int main(){
	test a;
	a.input();
	a.show();
	return 0;
}