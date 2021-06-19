/**
 *	File: file_wiriting.cpp
 * --------------------------------------------------------
 * This program use opens a file and write some data in it
 * and then store the data.
 **/
#include <iostream>
#include <fstream>
using namespace std;
class student
{
	char name[20];
	int roll_no;
public:
	inline int get_data();
	inline int show_data() const;
};
int main()
{
	student rajesh;
	ofstream file("rajesh.txt");
	char cp;
	do
	{
		cout << "Enter name and roll_no" << endl;
		rajesh.get_data();
		file.write((char*)&rajesh,sizeof(student));
		cout << "Student added successfully" << endl;
		cout << "add more.[Y/N]";
		cin >> cp;
	}while(cp == 'Y' || cp == 'y');
	file.close();
	return 0;
}
inline int student::get_data()
{
	cin >> name >> roll_no;
	return 0;
}
inline int student::show_data() const
{
	cout << "Name: " << name << endl << "Roll No.: " << roll_no << endl;
	return 0;
}
