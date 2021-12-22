#include "student.h"

void student::input()
{
	cout << "I am student" << '\n';

	Employee::input();

	cout << "Enter class;" << '\n';
	cin >> m_class;



}

void student::show()
{
	Employee::show();
	cout << "I am student class" << m_class <<  '\n';

}
