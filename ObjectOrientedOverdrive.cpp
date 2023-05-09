#include <iostream>
#include "Calculator.h"

int main()
{
    // Create an object of the Calculator class
    Calculator calculator;

    // Set the values of some of the object's member variables using its setters
    calculator.setRam(8);
    calculator.setSursa(500);
    calculator.setGpu("Nvidia");
    calculator.setMarca("Asus");
    calculator.setProcesor("Intel i7");
    calculator.setStocare("SSD");

    // Get the values of the object's member variables using its getters
    int ram = calculator.getRam();
    int sursa = calculator.getSursa();
    string gpu = calculator.getGpu();
    string marca = calculator.getMarca();
    string procesor = calculator.getProcesor();
    string stocare = calculator.getStocare();

    // Output the values of the member variables to the console
    cout << "RAM: " << ram << endl;
    cout << "Sursa: " << sursa << " W" << endl;
    cout << "GPU: " << gpu << endl;
    cout << "Marca: " << marca << endl;
    cout << "Procesor: " << procesor << endl;
    cout << "Stocare: " << stocare << endl;
}
