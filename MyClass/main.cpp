#include <iostream>
#include <string>
#include "MyClass.hpp"
#include "Shape.hpp"
#include "Account_moj.hpp"
#include "Student.hpp"
#include<iomanip>



void shape() {
	MyClass o1, o2; // tworzymy dwa obiekty
	o1.setVariable(16); // w o1 zmieniamy wartosc, o2 zostaje domyslnie
	int value = o1.getVariable(); //pobranie wartosci
	int value2 = o2.getVariable();
	std::cout << value << " " << value2 << std::endl;

	Rectangle rect;

	rect.setDimensions(); //a co gdybysmy wymiary pobrali od uzytkownika?
	std::cout << rect.getField() << " " << rect.getCircuit() << std::endl;

	Rectangle rect2(5, 8); //z konstruktorem parametryzowanym
	std::cout << rect2.getField() << " " << rect2.getCircuit() << std::endl;
	 
	Point p1, p2;
	p1.x = 2;
	p1.y = 10;
	p2.x = 2;
	p2.y = 8;
	Rectangle rect3(p1, p2 );
	std::cout << rect3.getField() << " " << rect3.getCircuit() << std::endl;

	Circle cir(6);  
	std::cout << cir.getField() << " " << cir.getCircuit() << std::endl;

	Triangle tri(2,5,4,10);
	std::cout << tri.getField() << " " << tri.getCircuit() << std::endl;
}

void zad22() {
	Account prv;
	prv.deposit(150);	// 150
	//prv.deposit(-10);	// warto obsluzyc
	std::cout << prv.getBalance() << std::endl;
	int cash = prv.withdraw(100); //balance = 50, cash = 100
	std::cout << prv.getBalance() << std::endl;
	cash = prv.withdraw(100); //balance = 0, cash = 50
	std::cout << prv.getBalance() << " " << cash << std::endl;
	//prv.withdraw(-10) // warto obsluzyc

	Account prv2("48645415867");
	prv2.deposit(-150);	
	std::cout << prv2.getBalance() << std::endl;
	int cash2 = prv2.withdraw(100); 
	std::cout << prv2.getBalance() << std::endl;
	cash2 = prv2.withdraw(100);
	std::cout << prv2.getBalance() << " " << cash2 << std::endl;
	
	Account prv3;
	Account prv4(prv3);
	prv3.deposit(150);
	std::cout << prv3.getBalance() << std::endl;
	int cash3 = prv3.withdraw(100);
	std::cout << prv3.getBalance() << std::endl;
	cash3 = prv2.withdraw(-100);
	std::cout << prv3.getBalance() << " " << cash3 << std::endl;
}

void zad23()
{
	Student s1("Jan", "Kowalski");

	int grade = 0;
	const int unsigned size = 5;
	int tab[size] = {};

	std::cout << "Podaj 5 ocen: " << std::endl;
	for (int i = 0; i < size; ++i)
	{
		if (grade > 0 && grade <= 6)
		{
			std::cin >> grade;
			tab[i] = grade;
		}
		else
		{
			std::cout << "Ocena jest spoza zakresu 1-6.";
			i -= 1;
		}
	}

	s1.setGrades(tab, size, grade);
	std::cout << "Średnia tego studenta wyniosi: "<< std::fixed << std::setprecision(2) << s1.getAverage();
	
}

int main()
{
	Student magda("Zielona", 7);
	std::cout << ;
}