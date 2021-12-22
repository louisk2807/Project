#pragma once

#include "Employee.h"

class Teacher: public Employee
{
private:
	string m_subjects;

public:
	Teacher() {}

	Teacher(int id, string name, int age, string email)
		: Employee{id, name, age, email}
	{}

	virtual void show();
	virtual void input();
};



