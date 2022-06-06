// Student.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.hpp"

int main()
{
	//kompozycja
	//Student magda("Zielona", 7);

	//agregacja
	Address adress("Zielona", 7);
	Student janNowak(adress);
	Student alaNowak(adress);
}


