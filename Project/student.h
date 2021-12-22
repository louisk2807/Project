#pragma once

#include "Employee.h"

class student: public Employee
{
private:
	string  m_class;

public:

	student() {}

	student(int id, string name, int age, string email)
		: Employee{ id, name, age, email }
	{}
	virtual void show();
	virtual void input();
};

