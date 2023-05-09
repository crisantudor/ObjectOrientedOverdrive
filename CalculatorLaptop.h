#pragma once
#include "Calculator.h"

// clasa B din diagrama
class CalculatorLaptop : public Calculator {
    protected:
        int batteryLife;
        double weight;

    public:
        // constructors
        CalculatorLaptop();
        CalculatorLaptop(int b, double w);

        // destructors
        ~CalculatorLaptop();

        // settere
        void setBatteryLife(int life);
        void setWeight(double w);

        void setRam(int rm); // method override 

        // gettere
        int getBatteryLife();
        double getWeight();

        // metode custom
        string calculateBatteryLife();

        void afiseazaDateleObiectului();
};


