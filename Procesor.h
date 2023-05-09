#pragma once
#include <string>

using namespace std;

// clasa E din diagrama
class Procesor
{
    private:
        string producator;
        string model;
        double frecventa;
        int numarNuclee;

    public:
        // constructor
        Procesor(string prod, string mod, double freq, int nuclee);

        // destructor
        ~Procesor();

        // settere
        void setModel(std::string mod);
        void setFrecventa(double freq);
        void setNumarNuclee(int nuclee);
        void setProducator(std::string prod);

        // gettere
        string getModel();
        int getNumarNuclee();
        double getFrecventa();
        string getProducator();
};

