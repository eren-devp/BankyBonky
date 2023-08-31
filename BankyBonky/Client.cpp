#include "Client.h"

using namespace std;

Client::Client(string firstName_, string lastName_, int age_, long long idNumber_, string status_) : User(firstName_, lastName_, age_, idNumber_, status_)
{
	
}

long long Client::GetMoney()
{
	return money;
}

void Client::ShowInformations()
{
	User::ShowInformations();
	cout << "Money on account: " << GetMoney() << endl;
}

void Client::SetMoney(long long money_)
{
	money = money_;
}