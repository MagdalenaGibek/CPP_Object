#pragma once

class MyClass {
	int variable = 42; // private by default
public:
	//akcesor (getter), kt�ry zwraca nam warto�� zmiennej variable
	//chowamy zmienna variable - OOP principle
	//ale metoda jest publiczna, i daje nam dostep do schowanej zmiennej
	int getVariable();
	void setVariable(int x1);
};