#pragma once
#include <iostream>

using namespace std;

class User {
public:
	User(string firstName_, string lastName_, int age_, long long idNumber_, string status_);

	string GetFirstName();
	string GetLastName();
	string GetStatus();
	int GetAge();
	long long GetIDNumber();

	void SetFirstName(string firstName_);
	void SetLastName(string lastName_);
	void SetAge(int age_);
	void SetIDNumber(long long idNumber_);
	void SetStatus(string status_);
	void ShowInformations();

private:
	string firstName;
	string lastName;
	string status;
	int age = 0;
	long long idNumber = 0;
};