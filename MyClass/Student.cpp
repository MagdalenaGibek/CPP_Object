#include "Student.hpp"
#include <iostream>

Student::Student(std::string name, std::string surname)
{
	this->name = name;
	this->surname = surname;
}

void Student::setGrades(int tab[], const int size, int grade)
{

	for (int i = 0; i < size; ++i)
	{

		this->tab[i] = tab[i];

	}
}

double Student::getAverage()
{
	double result = 0;
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += tab[i];
	}
	result = (sum / static_cast<double>(size));
	
	return result;
}


