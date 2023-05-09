#pragma once
#include <vector>
#include <string>
#include <utility>
#include "Calculator.h"

// clasa C din diagrama
class CalculatorDesktop : public Calculator
{
    protected:
        string tipTastatura;
        int numarVentilatoare;
        vector<pair<string, int>> hardwareComponents;

    public:
        // constructor
        CalculatorDesktop(int nv, string tt);

        // destructor
        ~CalculatorDesktop();

        // settere
        void setNumarVentilatoare(int nv);
        void setTipTastatura(string tt);

        // gettere
        int getNumarVentilatoare();
        string getTipTastatura();
        vector<pair<string, int>> getHardwareComponents();

        // metoda custom - un fel de setter, updater
        void adaugaComponentaHardware(string name, int price);
};
