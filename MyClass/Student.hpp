#pragma once

class Student {
	class Address {
	public:
		std::string street;
		int houseNo;
	};

	Address address;
	int* grades = nullptr;
	int noOfGrades = 0; //maxGrades
	int index = 0;
public:
	Student(std::string street, int houseNo)
	{
		address.street = street;
		address.houseNo = houseNo;
	}
	Student(int noOfGrades);
	~Student();
	void addGrade(int grade);
	double average();
};

