#include "CalculatorLaptop.h"

void CalculatorLaptop::setBatteryLife(int life)
{
    batteryLife = life;
}

void CalculatorLaptop::setWeight(double w)
{
    weight = w;
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


CalculatorLaptop::CalculatorLaptop() : batteryLife(0), weight(0.0) {}

CalculatorLaptop::CalculatorLaptop(int b, double w) : Calculator(), batteryLife(b), weight(w) {}

CalculatorLaptop::~CalculatorLaptop() {}
