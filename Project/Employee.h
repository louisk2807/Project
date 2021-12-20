#pragma once
#include <iostream>
#include <string>

using namespace std;

class Employee
{
protected:
	
	string m_name;
	int m_age{ 0 };
	string m_email;
	int m_phonenumber{ 0 };

public:
	//constructors
	Employee() {};

	Employee(int age, string name)
		: m_age{ age }, m_name{ name }
	{}

	//
	virtual void show();

	virtual void input();

	// getters, setters
	string getName();

};

