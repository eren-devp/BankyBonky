#include "Manager.h"

#pragma region Client
void Manager::AddClient(Client* client_)
{
	clients.push_back(client_);
	cout << "Client added: " << client_->GetFirstName() << endl << endl;
}

void Manager::RemoveClient(Client* client_)
{
	clients.remove(client_);
	cout << "Client deleted: " << client_->GetFirstName() << endl << endl;
}

void Manager::ShowClients(bool isDetailed) {
	if (!clients.empty()) {
		if (isDetailed) {
			for (Client* client : clients) {
				client->ShowInformations();
				cout << endl;
			}
		}
		else {
			cout << endl;

			int* i = new int(1);
			for (Client* client : clients)
			{
				cout << *i << ": " << client->GetFirstName() << " " << client->GetLastName() << endl;
				++*i;
			}
			cout << endl;
		}
	}
	else {
		cout << "There are no clients." << endl;
	}
}

void Manager::ManageClient(int number) {
	int foo;
	bool run = true;
	--number;

	list<Client*>::iterator it = clients.begin();
	advance(it, number);

	while (run) {
		(*it)->ShowInformations();
		cout << endl;
		cout << clientCommands;
		cin >> foo;

		switch (foo)
		{
		case 0:
			run = false;
			break;
		case 1: {
			string newFirstName;
			cout << "Enter new first name: ";
			cin >> newFirstName;
			(*it)->SetFirstName(newFirstName);
			break;
		}
		case 2: {
			string newLastName;
			cout << "Enter new last name: ";
			cin >> newLastName;
			(*it)->SetLastName(newLastName);
			break;
		}
		case 3: {
			int newAge;
			cout << "Enter new age: ";
			cin >> newAge;
			(*it)->SetAge(newAge);
			break;
		}
		case 4: {
			string newStatus;
			cout << "Enter new status: ";
			cin >> newStatus;
			(*it)->SetStatus(newStatus);
			break;
		}
		case 5: {
			long long newSalary;
			cout << "Enter new money: ";
			cin >> newSalary;
			(*it)->SetMoney(newSalary);
			break;
		}
		default:
			cout << "Unknown command." << endl;
			break;
		}
		system("cls");
	}
}
#pragma endregion

#pragma region Employee
void Manager::AddEmployee(Employee* employee_)
{
	employees.push_back(employee_);
	cout << "Employee added: " << employee_->GetFirstName() << endl << endl;
}

void Manager::RemoveClient(Employee* employee_)
{
	cout << "Employee removed: " << employee_->GetFirstName() << endl;
	employees.remove(employee_);
}

void Manager::ShowEmployees(bool isDetailed)
{
	if (!employees.empty()) {
		if (isDetailed) {
			for (Employee* employee : employees)
			{
				employee->ShowInformations();
				cout << endl;
			}
		}
		else {
			cout << endl;

			int* i = new int(1);
			for (Employee* employee : employees)
			{
				cout << *i << ": " << employee->GetFirstName() << " " << employee->GetLastName() << endl;
				++* i;
			}
			cout << endl;
		}
	}
	else {
		cout << "There are no employees." << endl;
	}
}

void Manager::ManageEmployee(int number) {
	int foo;
	bool run = true;
	--number;

	list<Employee*>::iterator it = employees.begin();
	advance(it, number);
	
	while (run) {
		(*it)->ShowInformations();
		cout << endl;
		cout << clientCommands;
		cin >> foo;

		switch (foo)
		{
		case 0:
			run = false;
			break;
		case 1: {
			string newFirstName;
			cout << "Enter new first name: ";
			cin >> newFirstName;
			(*it)->SetFirstName(newFirstName);
			break;
		}
		case 2: {
			string newLastName;
			cout << "Enter new last name: ";
			cin >> newLastName;
			(*it)->SetLastName(newLastName);
			break;
		}
		case 3: {
			int newAge;
			cout << "Enter new age: ";
			cin >> newAge;
			(*it)->SetAge(newAge);
			break;
		}
		case 4: {
			string newStatus;
			cout << "Enter new status: ";
			cin >> newStatus;
			(*it)->SetStatus(newStatus);
			break;
		}
		case 5: {
			int newSalary;
			cout << "Enter new salary: ";
			cin >> newSalary;
			(*it)->SetSalary(newSalary);
			break;
		}
		default:
			cout << "Unknown command." << endl;
			break;
		}
		system("cls");
	}
}
#pragma endregion