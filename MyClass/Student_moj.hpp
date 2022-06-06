#pragma once
#include<string>

const unsigned int size = 5;

class Student
{
	std::string name, surname;
	int tab[size] = {};

public:
	Student(std::string name, std::string surname);
	void setGrades(int tab[], const int size, int grade);
	double getAverage();
};

int getGrades();