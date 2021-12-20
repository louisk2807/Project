#include "Teacher.h"

void Teacher::show()
{
	Employee::show();
	cout << "I am teacher, i teach subjects..." << '\n';
}

void Teacher::input()
{
	cout << "I am teacher" << '\n';
	Employee::input();

	cout << "Enter subjects: ";
	getline(cin, m_subjects);

}

