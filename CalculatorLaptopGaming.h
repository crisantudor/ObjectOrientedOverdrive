#pragma once
#include "CalculatorLaptop.h"

// clasa D din diagrama
class CalculatorLaptopGaming : protected CalculatorLaptop
{
	private: 
		int refreshRateEcran;
		string sistemDeRacire;

    public:
        // settere
        void setRefreshRateEcran(int rr);
        void setSistemDeRacire(string sdr);

        //gettere
        int getRefreshRateEcran();
        string getSistemDeRacire();

        //metode custom
        void overclockProcesor();
};

