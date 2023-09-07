#pragma once
#include <iostream>

#include "User.hpp"

using namespace std;

class Client : public User {
public:
	// Constructor function of the client.
	Client(string firstName_, string lastName_, int age_, long long idNumber_, string status_);

	// Overrided constructor.
	Client(tuple<string, string, int, long long, string>* informations);

	// Destructor function of the client.
	~Client();

	// Returns the current money of the client.
	long long GetMoney();


	// Shows the all informations affiliated with person.
	void ShowInformations();

	// Sets the current money of the client.
	void SetMoney(long long money_);
private:
	long long* money = new long long(0);
};