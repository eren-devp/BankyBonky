#include "User.h"

User::User(string firstName_, string lastName_, int age_, long long idNumber_, string status_)
{
	SetFirstName(firstName_);
	SetLastName(lastName_);
	SetAge(age_);
	SetIDNumber(idNumber_);
	SetStatus(status_);
}

string User::GetFirstName()
{
	return firstName;
}

string User::GetLastName()
{
	return lastName;
}

string User::GetStatus()
{
	return status;
}

int User::GetAge()
{
	return age;
}

long long User::GetIDNumber()
{
	return idNumber;
}

void User::SetFirstName(string firstName_)
{
	if (firstName_.empty()) {
		throw exception("First name can not be empty.");
	}
	else {
		firstName = firstName_;
	}
}

void User::SetLastName(string lastName_)
{
	if (lastName_.empty()) {
		throw exception("Last name can not be empty.");
	}
	else {
		lastName = lastName_;
	}
}

void User::SetAge(int age_)
{
	if (age_ < 18) {
		throw exception("Person must be older than 18!");
	}
	else {
		age = age_;
	}
}

void User::SetIDNumber(long long idNumber_)
{
	if (idNumber_ < 10000000000) {
		throw exception("Not valid ID number.");
	}
	else {
		idNumber = idNumber_;
	}
}

void User::SetStatus(string status_)
{
	status = status_;
}

void User::ShowInformations()
{
	cout << "First Name: " << GetFirstName() << endl;
	cout << "Last Name: " << GetLastName() << endl;
	cout << "Age: " << GetAge() << endl;
	cout << "ID Number: " << GetIDNumber() << endl;
	cout << "Status: " << GetStatus() << endl;
}