#include "printInfo.h"
#include <iostream>

void printInfo(std::string userName, int userID, std::string userEmail, std::string street, std::string city, short zipCode) {
	std::cout << "\n\nName: " << userName << std::endl;
	std::cout << "\nID: " << userID << std::endl;
	std::cout << "\nEmail: " << userEmail << std::endl;
	std::cout << "\nStreet: " << street << std::endl;
	std::cout << "\nCity: " << city << std::endl;
	std::cout << "\nzipCode: " << zipCode << std::endl;



}