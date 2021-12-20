#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

#include "Employee.h"
#include "Teacher.h"
#include "student.h"
#include "utils.h"

void showMenu() {
	cout << "-----------------------Menu----------------------" << '\n';
	cout << "1. Add employee" << '\n';
	cout << "2. Edit employee" << '\n';
	cout << "3. Remove employee" << '\n';
	cout << "4. Sort employee by name" << '\n';
	cout << "5. Show all employees" << '\n';
	cout << "0. Exit" << '\n';
	cout << "--------------------------------------------------" << '\n';
	cout << "Please choose: ";
}

void showAddMenu() {
	cout << "-----------------------Menu----------------------" << '\n';
	cout << "1. Add teacher" << '\n';
	cout << "2. Add student" << '\n';
	cout << "--------------------------------------------------" << '\n';
	cout << "Please choose: ";
}

void showAll(vector<Employee*> list) {
	for (auto e : list) {
		e->show();
	}
}

Employee* findByName(vector<Employee*>& list, string name) {
	for (auto e : list) {
		if (e->getName().compare(name) == 0) {
			return e;
		}

		return nullptr;
	}
}

void editEmployee(vector<Employee*>& list, string name) {
	auto e = findByName(list, name);

	e->input();
}

void removeEmployee(vector<Employee*>& list, string name) {
	auto e = findByName(list, name);

	auto index = std::find(list.begin(), list.end(), e);

	list.erase(index);
}
int main()
{
	Employee* e{ new Employee() };
	Employee* t{ new Teacher() };
	Employee* s{ new student() };

	vector<Employee*> list{};

	ifstream fileIn{ "input.txt" };

	string line;
	while (getline(fileIn, line)) {

		auto vec = Utils::split(line, ",");

		if (vec.at(0) == "1") {
			list.push_back(new Teacher{ stoi(vec.at(1)), vec.at(2) });
		}
		else if (vec.at(0) == "2") {
			list.push_back(new student{ stoi(vec.at(1)), vec.at(2) });
		}
	}

	int choose;
	bool exit{ false };

	string name;

	showMenu();
	while (true) {

		cin >> choose;
		cin.ignore(100, '\n');

		switch (choose)
		{
		case 1:
		{
			cout << "Add employee" << '\n';

			int chooseType;
			showAddMenu();
			cin >> chooseType;
			cin.ignore(100, '\n');

			switch (chooseType) {
			case 1:
			{
				Employee* e{ new Teacher{} };
				e->input();
				list.push_back(e);
			}
			break;
			case 2:
			{
				Employee* e{ new student{} };
				e->input();
				list.push_back(e);
			}
			break;
			

		}
		break;
		case 2:
		{
			cout << "Edit employee" << '\n';
			cout << "Enter name: ";
			getline(cin, name);
			
			for (auto e : list) {
				if (e->getName().compare(name) == 0) {
					e->input();
					break;
				}
			}
		}
		break;
		case 3:
		{
			cout << "Remove employee" << '\n';
			cout << "Enter name: ";
			getline(cin, name);

			for (auto e : list) {
				if (e->getName().compare(name) == 0) {
					auto index = std::find(list.begin(), list.end(), e);
					list.erase(index);
					break;
				}
			}
		}
		break;
		case 4:
			cout << "Sort by name" << '\n';
			std::sort(
				list.begin(),
				list.end(),
				[](const auto& e1, const auto& e2) {return e1->getName() < e2->getName(); }
			);
			showAll(list);
			break;
		case 5:
			cout << "Show all employees" << '\n';
			showAll(list);
			break;
		case 0:
			cout << "Exit" << '\n';
			exit = true;
			break;
		}
		if (exit) {
			break;
		}
		showMenu();
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
