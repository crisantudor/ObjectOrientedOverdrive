#include <iostream>
#include "Calculator.h"

int main()
{
    // Create an object of the Calculator class
    Calculator calculatorDefault;
    Calculator calculatorCustom("Lenovo", "Intel i9", "SSD", 240, 16);

    // Get the values of the object's member variables using its getters
    int ram = calculatorCustom.getRam();
    int sursa = calculatorCustom.getSursa();
    string gpu = calculatorCustom.getGpu();
    string marca = calculatorCustom.getMarca();
    Procesor procesor = calculatorCustom.getProcesor();
    string stocare = calculatorCustom.getStocare();

    // Output the values of the member variables to the console
    cout << "RAM: " << ram << endl;
    cout << "Sursa: " << sursa << " W" << endl;
    cout << "GPU: " << gpu << endl;
    cout << "Marca: " << marca << endl;
    cout << "Model Procesor: " << procesor.getModel() << endl;
    cout << "Stocare: " << stocare << endl;
}
