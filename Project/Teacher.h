#pragma once

#include "Employee.h"

class Teacher: public Employee
{
private:
	string m_subjects;

public:
	Teacher() {}

	Teacher(int age, string name)
		: Employee{ age, name }
	{}

	virtual void show();
	virtual void input();
};



