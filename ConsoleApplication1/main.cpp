#include <iostream>
#include "car.hpp"

int main()
{
	Car audi(EngineType::Diesel);
	audi.oilChange();
	audi.annualService();
}