#include <iostream>
#include "Calculator.h"

int main()
{
    std::cout << "Hello World!\n";

    // Create an object of the Calculator class
    Calculator myCalc;

    // Set the values of some of the object's member variables using its setters
    myCalc.setRam(8);
    myCalc.setSursa(500);
    myCalc.setGpu("Nvidia");
    myCalc.setMarca("Asus");
    myCalc.setProcesor("Intel i7");
    myCalc.setStocare("SSD");

    // Get the values of the object's member variables using its getters
    int ram = myCalc.getRam();
    int sursa = myCalc.getSursa();
    string gpu = myCalc.getGpu();
    string marca = myCalc.getMarca();
    string procesor = myCalc.getProcesor();
    string stocare = myCalc.getStocare();

    // Output the values of the member variables to the console
    cout << "RAM: " << ram << endl;
    cout << "Sursa: " << sursa << " W" << endl;
    cout << "GPU: " << gpu << endl;
    cout << "Marca: " << marca << endl;
    cout << "Procesor: " << procesor << endl;
    cout << "Stocare: " << stocare << endl;
}
