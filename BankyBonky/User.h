#pragma once
#include <iostream>
#include <tuple>

using namespace std;

// User class is the superclass of the other sub-classes. It contains common veriables and functions.
class User {
public:
	// Base constructor function of the person. 
	User(string firstName_, string lastName_, int age_, long long idNumber_, string status_);

	// Overrided constructor.
	User(tuple<string, string, int, long long, string>* informations);

	// Base destructor function of the person.
	~User();

	// Returns the first name of the person.
	inline string GetFirstName();

	// Returns the last name of the person.
	inline string GetLastName();

	// Returns the status of the person.
	inline string GetStatus();

	// Returns age of the person.
	inline int GetAge();

	// Returns ID number of the person.
	inline long long GetIDNumber();


	// Sets the first name of the person.
	inline void SetFirstName(string firstName_);

	// Sets the last name of the person.
	inline void SetLastName(string lastName_);

	// Sets the age of the person.
	inline void SetAge(int age_);

	// Sets the ID number of the person.
	inline void SetIDNumber(long long idNumber_);

	// Sets the status of the person.
	inline void SetStatus(string status_);

	// Shows the all informations affiliated with person.
	void ShowInformations();

	bool operator == (const User& user) const {
		if (user.idNumber == this->idNumber)
			return true;
		return false;
	}

private:
	string* firstName = nullptr;
	string* lastName = nullptr;
	string* status = nullptr;
	int* age = new int(0);
	long long* idNumber = new long long(0);
};