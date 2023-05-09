#pragma once
#include <string>;
#include "Procesor.h"

using namespace std;

// clasa A din diagrama
class Calculator
{
protected:
	string marca;
	int ram;
	int sursa;
	Procesor procesor;

private:
	string gpu;
	string stocare;

public:
	// Default constructor
	Calculator();

	// Constructor with parameters
	Calculator(string gpu, string m, string stoc, int s, int rm);

	// Copy constructor
	Calculator(const Calculator& other);

	// Destructor
	~Calculator();

	// settere
	void setRam(int rm);
	void setSursa(int s);
	void setGpu(string g);
	void setMarca(string m);
	void setStocare(string s);

	// gettere
	int getRam();
	int getSursa();
	string getGpu();
	string getMarca();
	string getStocare();
	Procesor getProcesor();

	virtual void afiseazaDateleObiectului();

	void afiseazaDateleObiectului(int r);
};

