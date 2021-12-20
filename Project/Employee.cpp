#include "Employee.h"

void Employee::show()
{
	cout << m_age << " " << m_name << " " << m_email << " " << "m_phonenumber" << "\n";
}
void Employee::input()
{
	cout << "Enter age: ";
	cin >> m_age;

	cin.ignore(100, '\n'); // ignore new line

	cout << "Enter name: ";
	getline(cin, m_name);

	cout << "Enter email: ";
	getline(cin, m_email);

	cout << "Enter phone number: ";
	cin >> m_phonenumber;
}

string Employee::getName()
{
	return m_name;
}