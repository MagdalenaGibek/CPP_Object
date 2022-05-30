#pragma once
#define _USE_MATH_DEFINES 

class Rectangle 
{
	int a = 0, b = 0;
public:
	Rectangle();
	Rectangle(int a, int b);
	void setDimensions();
	int getField();
	int getCircuit();
};
class Circle
{
	int r = 0;

public:
	Circle(int r);
	int getField();
	int getCircuit();
};
class Triangle
{
	int a = 0;
	int h = 0;
	int c = 0;
	int b = 0;

public:
	Triangle(int a, int h, int c, int b);
	int getField();
	int getCircuit();
};