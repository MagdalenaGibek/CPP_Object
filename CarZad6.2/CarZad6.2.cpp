#include "CarZad6.2.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

int Car::Engine::count = 0;
int Car::Engine::IDCars = 0;

Car::Car(EngineType engineType, double size)
{
	engine.setEngineType(engineType);
	engine.setSize(size);
	vin = Car::Engine::generateVIN(engine);
}

void Car::annualService()
{
	std::cout << "service has been done" << std::endl;
}
void Car::oilChange()
{
	engine.oilChange();//wywoluje funkcje oil change obiektu engine
}
std::string Car::getVIN()
{
	return vin;
}
int Car::getCount()
{
	return Engine::getCount();
}
std::string Car::Engine::generateVIN(Engine &engine)
{
	std::ostringstream result;
	if (engine.engineType == EngineType::Diesel)
	{
		result << "1";
	}
	else
	{
		result << "2";
	}

	result << static_cast<int>(engine.size * 10);

	//result += "0061";

	result << std::setw(4) << std::setfill('0')<< engine.IDCars;

	return result.str();
}

int Car::Engine::getCount()
{
	return count;
}

Car::Engine::Engine()
{
	count++;
	IDCars++;
}

Car::Engine::~Engine()
{
	count--;
}

void Car::Engine::oilChange()
{
	std::cout << "oil change" << std::endl;
}

void Car::Engine::setEngineType(EngineType engineType)
{
	this->engineType = engineType;
}

void Car::Engine::setSize(double size)
{
	this->size = size;
}