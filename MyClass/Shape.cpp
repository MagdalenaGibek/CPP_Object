#include "Shape.hpp"
#include <iostream>
#include <cmath>


//konstruktor bezparametrowy - moze byc pusty
//potrzebny, zeby utworzyc obiekt Rectangle rect
//gdybysmy nie mieli konstruktora parametryzowanego - ten by sie sam wygenerowal
Rectangle::Rectangle()
{
}

Rectangle::Rectangle(int a, int b)
{
    this->a = a;
    this->b = b;
}

void Rectangle::setDimensions()
{
    int x = 0;
    int y = 0;
    std::cout << "Podaj wysokość prostokąta: " << std::endl;
    std::cin >> x;

    while (x < 0)
    {
        std::cout << "Wartość musi być większa od 0." << std::endl;
        std::cout << "Podaj wysokość prostokąta: " << std::endl;
        std::cin >> x;
    }

    std::cout << "Podaj długość prostokąta: " << std::endl;
    std::cin >> y;

    while (y < 0)
    {
        std::cout << "Wartość musi być większa od 0." << std::endl;
        std::cout << "Podaj długość prostokąta: " << std::endl;
        std::cin >> y;
    }

    this->a = x;
    this->b = y;

}

int Rectangle::getField()
{
    return a * b;
}

int Rectangle::getCircuit()
{
    return (2 * a) + (2 * b);
}

Circle::Circle(int r)
{
    this->r = r;
}

int Circle::getField()
{
    return M_PI*pow(r,2);
}

int Circle::getCircuit()
{
    return 2*M_PI*r;
}

Triangle::Triangle(int a, int h, int b, int c)
{
    this->a = a;
    this->h = h;
    this->b = b;
    this->c = c;
}

int Triangle::getField()
{
    return (a*h)/2;
}

int Triangle::getCircuit()
{
    return a+b+c;
}

