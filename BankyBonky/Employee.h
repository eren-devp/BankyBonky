#pragma once
#include "User.h"

class Employee : public User {
public:
	Employee(string firstName_, string lastName_, int age_, long long idNumber_, string status_, int salary);

	int GetSalary();

	void SetSalary(int salary_);
	void ShowInformations();

private:
	int salary = 0;
};