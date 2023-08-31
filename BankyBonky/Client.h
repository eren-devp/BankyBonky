#pragma once
#include <iostream>
#include "User.h"

using namespace std;

class Client : public User {
public:
	Client(string firstName_, string lastName_, int age_, long long idNumber_, string status_);

	long long GetMoney();

	void ShowInformations();
	void SetMoney(long long money_);

private:
	long long money = 0;
};