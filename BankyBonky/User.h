#pragma once
#include <iostream>

using namespace std;
// User class is the superclass of the other sub-classes. It contains common veriables and functions.
class User {
public:
	// Base constructor function of the person. 
	User(string firstName_, string lastName_, int age_, long long idNumber_, string status_);

	// Base destructor function of the person.
	~User();

	// Returns the first name of the person.
	string GetFirstName();

	// Returns the last name of the person.
	string GetLastName();

	// Returns the status of the person.
	string GetStatus();

	// Returns age of the person.
	int GetAge();

	// Returns ID number of the person.
	long long GetIDNumber();


	// Sets the first name of the person.
	void SetFirstName(string firstName_);

	// Sets the last name of the person.
	void SetLastName(string lastName_);

	// Sets the age of the person.
	void SetAge(int age_);

	// Sets the ID number of the person.
	void SetIDNumber(long long idNumber_);

	// Sets the status of the person.
	void SetStatus(string status_);

	// Shows the all informations affiliated with person.
	void ShowInformations();

private:
	string* firstName = nullptr;
	string* lastName = nullptr;
	string* status = nullptr;
	int* age = new int(0);
	long long* idNumber = new long long(0);
};