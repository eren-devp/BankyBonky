#include <iostream>
#include "BankSystem.h"

using namespace std;

int main()
{
	try {
		Client client = Client("Talha", "Genc", 18, 11111111111, "VIP Client");
		Employee employee("Burak", "Ergul", 19, 11111111111, "Manager", 15000);

		employee.ShowInformations();
		cout << endl;
		client.ShowInformations();
	}
	catch (exception out) {
		cout << out.what() << endl; // If we had any exceptions out we need to see them.
	}
}