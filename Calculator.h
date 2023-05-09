#pragma once
#include <string>;

using namespace std;

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

	Calculator();
	~Calculator();
};

