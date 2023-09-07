#pragma once
#include "User.hpp"

class Employee : public User {
public:
	// Constructor function of the employee.
	Employee(string firstName_, string lastName_, int age_, long long idNumber_, string status_, int salary_);

	// Overrided constructor.
	Employee(tuple<string, string, int, long long, string>* informations, int salary_);

	// Destructor function of the employee.
	~Employee();

	// Returns the salary of the employee.
	int GetSalary();

	// Sets the salary of the employee.
	void SetSalary(int salary_);

	// Shows the all informations affiliated with person.
	void ShowInformations();

private:
	int* salary = new int(0);
};