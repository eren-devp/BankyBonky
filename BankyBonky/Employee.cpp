#include "Employee.h"

Employee::Employee(string firstName_, string lastName_, int age_, long long idNumber_, string status_, int salary_) :
	User(firstName_, lastName_, age_, idNumber_, status_)
{
	SetSalary(salary_);
}

int Employee::GetSalary()
{
	return salary;
}

void Employee::SetSalary(int salary_)
{
	if (salary_ < 0) {
		throw exception("Salary must be more than 0.");
	}
	else {
		salary = salary_;
	}
}

void Employee::ShowInformations()
{
	User::ShowInformations();
	cout << "Salary: " << salary << endl;
}