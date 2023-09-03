#include "User.h"

User::User(string firstName_, string lastName_, int age_, long long idNumber_, string status_)
{
	SetFirstName(firstName_);
	SetLastName(lastName_);
	SetAge(age_);
	SetIDNumber(idNumber_);
	SetStatus(status_);
}

User::User(tuple<string, string, int, long long, string>* informations) {
	SetFirstName(get<0>(*informations));
	SetLastName(get<1>(*informations));
	SetAge(get<2>(*informations));
	SetIDNumber(get<3>(*informations));
	SetStatus(get<4>(*informations));
}

User::~User()
{
	// Base destructor.
}

string User::GetFirstName()
{
	return *firstName;
}

string User::GetLastName()
{
	return *lastName;
}

string User::GetStatus()
{
	return *status;
}

int User::GetAge()
{
	return *age;
}

long long User::GetIDNumber()
{
	return *idNumber;
}

void User::SetFirstName(string firstName_)
{
	if (firstName_.empty()) {
		throw exception("First name can not be empty.");
	}
	else {
		firstName = new string(firstName_);
	}
}

void User::SetLastName(string lastName_)
{
	if (lastName_.empty()) {
		throw exception("Last name can not be empty.");
	}
	else {
		lastName = new string(lastName_);
	}
}

void User::SetAge(int age_)
{
	if (age_ < 18) {
		throw exception("Person must be older than 18!");
	}
	else {
		age = new int(age_);
	}
}

void User::SetIDNumber(long long idNumber_)
{
	if (idNumber_ < 10000000000) {
		throw exception("Not valid ID number.");
	}
	else {
		idNumber = new long long(idNumber_);
	}
}

void User::SetStatus(string status_)
{
	status = new string(status_);
}

void User::ShowInformations()
{
	cout << "First Name: " << GetFirstName() << endl;
	cout << "Last Name: " << GetLastName() << endl;
	cout << "Age: " << GetAge() << endl;
	cout << "ID Number: " << GetIDNumber() << endl;
	cout << "Status: " << GetStatus() << endl;
}