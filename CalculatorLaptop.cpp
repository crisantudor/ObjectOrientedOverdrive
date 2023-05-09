#include "CalculatorLaptop.h"
#include <iostream>

void CalculatorLaptop::setBatteryLife(int life)
{
    batteryLife = life;
}

void CalculatorLaptop::setWeight(double w)
{
    weight = w;
}

void CalculatorLaptop::setRam(int rm)
{
    ram = rm;
}

int CalculatorLaptop::getBatteryLife()
{
    return batteryLife;
}

double CalculatorLaptop::getWeight()
{
    return weight;
}

string CalculatorLaptop::calculateBatteryLife()
{
    string batteryLifeStr = to_string(batteryLife);

    return "Battery life: " + batteryLifeStr + " %";
}

void CalculatorLaptop::afiseazaDateleObiectului()
{
    cout << "Laptop: " << "Baterie:" << batteryLife << "%, Greutate: " << weight << endl;
}


CalculatorLaptop::CalculatorLaptop() : batteryLife(0), weight(0.0) {}

CalculatorLaptop::CalculatorLaptop(int b, double w) : Calculator(), batteryLife(b), weight(w) {}

CalculatorLaptop::~CalculatorLaptop() {}
