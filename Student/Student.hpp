#pragma once
#include <string>

struct Address {
	std::string street;
	int houseNo;
};
class Student {
	Address address;
public:
	Student(Address& address);
};