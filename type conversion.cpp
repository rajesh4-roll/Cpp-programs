/**
 * 	File: type conversion.cpp
 * 	------------------------------------------------
 * 	conversion between user defined type and buil in
 * 	type cannot be performed implicitly by compiler but
 * 	c++ allows type conversion between them from after
 * 	the rules for the type conversion have been defined.
 *	Three types of situations arises in the data conversion
 * 	between incompatible type:-
 * 	1. Conversion from basic type to class type
 * 	2. Conversion from class type to basic type
 * 	3. Conversion from one class type to another class type
 **/
 #include <iostream>
 #include <math.h>
 using namespace std;
 class complex
 {
	int real, imaginary;
	public:
		complex():real(0),imaginary(0){}
		complex(int a):real(a),imaginary(0){}
		int get_data();
		inline int show_data() const;
		operator float()
		{
			float m1;
			m1 = sqrt(real * real + imaginary * imaginary);
			return m1;
		}
};
int main()
{
	complex c1;
	c1.get_data();
	c1.show_data();
	float magnitude = c1;
	cout  << "The magnitue is : "<<magnitude<<endl;
	return 0;
}
int complex::get_data()
{
	cin >> real >> imaginary;
	return 0;
}
inline int complex::show_data() const
{
	cout <<real<<" + i"<<imaginary<<endl;
	return 0;
}

