#include "Calculator.h"
#include <string> // Include the <string> header to define the string type

using namespace std;

void Calculator::setRam(int rm)
{
    ram = rm;
}

void Calculator::setSursa(int s)
{
    sursa = s;
}

void Calculator::setGpu(string g)
{
    gpu = g;
}

void Calculator::setMarca(string m)
{
    marca = m;
}

void Calculator::setProcesor(string cpu)
{
    procesor = cpu;
}

void Calculator::setStocare(string s)
{
    stocare = s;
}

int Calculator::getRam()
{
    return ram;
}

int Calculator::getSursa()
{
    return sursa;
}

string Calculator::getGpu()
{
    return gpu;
}

string Calculator::getMarca()
{
    return marca;
}

string Calculator::getStocare()
{
    return stocare;
}

string Calculator::getProcesor()
{
    return procesor;
}

// Default constructor
Calculator::Calculator() : marca(""), ram(0), sursa(0), procesor(""), gpu(""), stocare("") {}

// Constructor with parameters
Calculator::Calculator(string gpu, string m, string p, string stoc, int s, int rm) : marca(m), ram(rm), sursa(s), procesor(p), gpu(gpu), stocare(stoc) {}

// Copy constructor
Calculator::Calculator(const Calculator& other) {
    marca = other.marca;
    procesor = other.procesor;
    ram = other.ram;
    sursa = other.sursa;
}

// Destructor
Calculator::~Calculator() {}

