#include "Procesor.h"

Procesor::Procesor() : producator(""), model("420 BLZ"), frecventa(0), numarNuclee(0) {}

Procesor::Procesor(string prod, string mod, double freq, int nuclee) : producator(prod), model(mod), frecventa(freq), numarNuclee(nuclee) {}

Procesor::~Procesor()
{
}

void Procesor::setProducator(std::string prod)
{
    producator = prod;
}

void Procesor::setModel(std::string mod)
{
    model = mod;
}

void Procesor::setFrecventa(double freq)
{
    frecventa = freq;
}

void Procesor::setNumarNuclee(int nuclee)
{
    numarNuclee = nuclee;
}

string Procesor::getProducator()
{
    return producator;
}

string Procesor::getModel()
{
    return model;
}

double Procesor::getFrecventa()
{
    return frecventa;
}

int Procesor::getNumarNuclee()
{
    return numarNuclee;
}