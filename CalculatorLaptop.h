#pragma once
#include "Calculator.h"
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
    CalculatorLaptop() : batteryLife(0), weight(0.0) {}

    CalculatorLaptop(int b, double w)
        : Calculator(), batteryLife(b), weight(w) {}

    // destructors
    ~CalculatorLaptop() {}
};


