//main
#include <string>
#include <iostream>
#include "Address.h"
#include "Customer.h"
#include "printInfo.h"
using namespace std;

int main() {
	Customer customer;

	cout << "user name: ";
	getline(cin, customer.userName);

	cout << "user ID: ";
	cin >> customer.userID;

	cout << "user email: ";
	cin >> customer.userEmail;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');


	cout << "street name: ";
	getline(cin, customer.addr.street);

	cout << "city name: ";
	getline(cin, customer.addr.city);

	cout << "zip code: ";
	cin >> customer.addr.zipCode;


	printInfo(customer.userName, customer.userID, customer.userEmail, customer.addr.street, customer.addr.city, customer.addr.zipCode);

	return 0;
}
