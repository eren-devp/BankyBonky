#pragma once
#include "Client.h"
#include "Employee.h"
#include <list>
#include <iterator>

using namespace std;

// Management system of the saved people on bank system.
class Manager {
public:
#pragma region Client
	// Add client to client list.
	void AddClient(Client* client_);

	// Remove client from the client list.
	void RemoveClient(Client* client_);

	// Shows all the clients on list.
	void ShowClients(bool isDetailed);

	// To be able to change the client's informations.
	void ManageClient(int number);
#pragma endregion

#pragma region Employee
	// Add employee to employee list.
	void AddEmployee(Employee* employee_);

	// Remove employee from the employee list.
	void RemoveClient(Employee* employee_);

	// Shows all the employees on list.
	void ShowEmployees(bool isDetailed);

	// To be able to change the client's informations.
	void ManageEmployee(int number);
#pragma endregion

private:
	list<Client*> clients;
	list<Employee*> employees;

	const string clientCommands = "0: Exit.\n1: Change first name.\n2: Change last name.\n3: Change age.\n4: Change status.\n5: Change money.\n> ";
	const string employeeCommands = "0:Exit.\n1: Change first name.\n2: Change last name.\n3: Change age.\n4: Change status.\n5: Change salary.\n> ";
};