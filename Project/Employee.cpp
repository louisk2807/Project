#include "Employee.h"

void Employee::show()
{
	cout << m_id << " " << m_name << " " << m_age << " " << m_email << "\n";
}
void Employee::input()
{
	cout << "Enter id: ";
	cin >> m_age;

	cin.ignore(100, '\n'); // ignore new line

	cout << "Enter name: ";
	getline(cin, m_name);

	cout << "Enter age: ";
	getline(cin, m_email);

	cout << "Enter email: ";
	cin >> m_email;
}

string Employee::getName()
{
	return m_name;
}