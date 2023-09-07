#pragma once
#include <tuple>
#include <iostream>

#include "Client.hpp"
#include "Employee.hpp"
#include "Manager.hpp"

using namespace std;

auto GetBasicInformations() {
	string firstName;
	string lastName;
	string status;
	int age;
	long long idNumber;

	cout << "First name: ";
	cin >> firstName;

	cout << "Last name: ";
	cin >> lastName;

	cout << "Status: ";
	cin >> status;

	cout << "Age: ";
	cin >> age;

	cout << "ID number: ";
	cin >> idNumber;

	return make_tuple(firstName, lastName, age, idNumber, status);
}

const string commandLines = "> 1: List clients.\n> 2: List employees.\n> 3: Add client.\n> 4: Add employee.\n> 0: Exit.";

int main()
{
	try {
		int input;

		Manager* manager = new Manager();
		Client* client1 = new Client("Talha", "Genc", 19, 11111111111, "VIP"); // Test client.
		Client* client2 = new Client("Burak", "Ergul", 22, 11111111111, "Client"); // Test client.
		Employee* employee1 = new Employee("Cem", "Deveci", 19, 11111111111, "Manager", 33000); // Test employee.
		Employee* employee2 = new Employee("Serhat", "Saglam", 18, 11111111111, "Employee", 18000); // Test employee.
		Employee* ezgi = new Employee("Ezgi", "Erol", 19, 11111111111, "Digital Advertising Branch Manager", 37550); // Real employee.

		manager->AddClient(client1);
		manager->AddClient(client2);
		manager->AddEmployee(ezgi);
		manager->AddEmployee(employee1);
		manager->AddEmployee(employee2);
		
		while (true)
		{
			cout << commandLines << endl;
			cin >> input;

			switch (input)
			{
			case 0:
				exit(0x0);
				break;

			case 1: {
				system("cls");

				while (true) {
					int input_2 = -1;

					manager->ShowClients(false);

					cout << "For Detailed Informations: 0\nTo Exit: any negative number\n> ";
					cin >> input_2;
					cout << endl;

					if (input_2 == 0) {
						manager->ShowClients(true);
					}
					else if (input_2 < 0) {
						break;
					}
					else {
						system("cls");
						manager->ManageClient(input_2);
					}
				}
				break;
			}

			case 2: {
				while (true) {
					int input_2 = -1;

					manager->ShowEmployees(false);

					cout << "For Detailed Informations: 0\nTo Exit: any negative number\n> ";
					cin >> input_2;

					if (input_2 == 0) {
						system("cls");
						manager->ShowEmployees(true);
					}
					else if (input_2 < 0) {
						break;
					}
					else {
						system("cls");
						manager->ManageEmployee(input_2);
					}
				}
				break;
			}

			case 3: {
				auto infos = GetBasicInformations();

				Client* newClient = new Client(&infos);
				manager->AddClient(newClient);
				break;
			}

			case 4: {
				auto infos = GetBasicInformations();
				int salary;

				cout << "Enter the salary: ";
				cin >> salary;

				Employee* newEmployee = new Employee(&infos, salary);
				manager->AddEmployee(newEmployee);
				break;
			}

			default:
				cout << "Please enter a valid number." << endl << endl;
				break;
			}
		}
	}
	catch (exception out) {
		cout << out.what() << endl; // If we had any exceptions out we need to see them.
	}
}