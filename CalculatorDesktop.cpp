#include "CalculatorDesktop.h"

CalculatorDesktop::CalculatorDesktop()
{

}

CalculatorDesktop::CalculatorDesktop(int nv, string tt) : Calculator(), numarVentilatoare(nv), tipTastatura(tt) {}
CalculatorDesktop::~CalculatorDesktop()
{
}
;
void CalculatorDesktop::setNumarVentilatoare(int nv)
{
	numarVentilatoare = nv;
}
int CalculatorDesktop::getNumarVentilatoare()
{
	return numarVentilatoare;
}
void CalculatorDesktop::setTipTastatura(string tt)
{
	tipTastatura = tt;
}
string CalculatorDesktop::getTipTastatura()
{
	return tipTastatura;
}
void CalculatorDesktop::adaugaComponentaHardware(string name, int price)
{
	hardwareComponents.push_back(make_pair(name, price));
}
vector<pair<string, int>> CalculatorDesktop::getHardwareComponents()
{
	return hardwareComponents;
};
