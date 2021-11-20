/*
 * 	File: pointer object.cpp
 * 	-------------------------------------------------------------
 * 	Pointer object creation and use in our program. Pointer
 * 	object must contain the addres of another non-pointer object. 
 **/
 #include <iostream>
 using namespace std;
 class integer
 {
 	int name;
 public:
 	integer():name(4){}
 	integer(int pi):name(pi){}
 	integer(const integer &a)
 	{
 		name = a.name;
 	}
 	int *show_data()
 	{
 		cout << name << endl;
 		return 0;
 	}
 };
int main()
{
	integer i1  = 5,*i2 = new integer;
	i1.show_data();
	(*i2).show_data();
	return 0;
}

