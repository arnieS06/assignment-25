#pragma once

#include <iostream>
#include "Address.h"

struct Customer {
	std::string userEmail;
	int userID = 0;
	std::string userName;
	Address addr;

};

