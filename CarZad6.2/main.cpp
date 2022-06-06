#include <iostream>
#include "CarZad6.2.hpp"

int main()
{
	Car audi(EngineType::Petrol, 1.78);
	Car opel(EngineType::Diesel, 1.2);
	{
		Car mazda(EngineType::Petrol, 1.3);
	}
	Car hyundai(EngineType::Petrol, 1.46);

	//audi.oilChange();
	//audi.annualService();

	std::cout << audi.getVIN() << std::endl;
	std::cout << opel.getVIN() << std::endl;
	std::cout << hyundai.getVIN() << std::endl;

	std::cout << "Liczba samochodów: "<< Car::getCount() << std::endl;

}

