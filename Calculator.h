#pragma once
#include <string>;

using namespace std;

// clasa A din diagrama
class Calculator
{
protected:
	string marca;
	int ram;
	int sursa;

private:
	string procesor;
	string gpu;
	string stocare;

public:
	void setRam(int rm);
	void setSursa(int s);
	void setGpu(string g);
	void setMarca(string m);
	void setProcesor(string cpu);
	void setStocare(string s);

	int getRam();
	int getSursa();
	string getGpu();
	string getMarca();
	string getStocare();
	string getProcesor();

	// Default constructor
	Calculator();

	// Constructor with parameters
	Calculator(string gpu, string m, string p, string stoc, int s, int rm);

	// Copy constructor
	Calculator(const Calculator& other);

	// Destructor
	~Calculator();
};

