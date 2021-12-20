#include "student.h"

void student::input()
{
	cout << "I am student" << '\n';

	Employee::input();

	cout << "Enter academic ability: " << '\n';
	cin >> m_AcademicAbility;

	cout << "Enter conduct: " << '\n';
	cin >> m_Conduct;

	cout << "Enter medium score: " << '\n';
	cin >> m_MediumScore;


}

void student::show()
{
	Employee::show();
	cout << "I am student, I have " << m_AcademicAbility << "academic ability" << " , " << m_Conduct << "conduct" << " , " << m_MediumScore << "medium Score" << '\n';

}
