#pragma once

#include "Employee.h"

class student: public Employee
{
private:
	string m_AcademicAbility;
	string m_Conduct;
	int m_MediumScore;

public:

	student() {}

	student(int age, string name)
		: Employee{ age, name }
	{}
	virtual void show();
	virtual void input();
};

