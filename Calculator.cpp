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

Calculator::Calculator()
{
}

Calculator::~Calculator()
{
}
