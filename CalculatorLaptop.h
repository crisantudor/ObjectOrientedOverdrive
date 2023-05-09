#pragma once
#include "Calculator.h"

// clasa B din diagrama
class CalculatorLaptop : public Calculator {
protected:
    int batteryLife;
    double weight;

public:
    void setBatteryLife(int life) {
        batteryLife = life;
    }

    void setWeight(double w) {
        weight = w;
    }

    int getBatteryLife() const {
        return batteryLife;
    }

    double getWeight() const {
        return weight;
    }

    // constructors
    CalculatorLaptop();

    CalculatorLaptop(int b, double w);

    // destructors
    ~CalculatorLaptop();
};


