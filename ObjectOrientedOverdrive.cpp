#include <iostream>
#include "Calculator.h"
#include "CalculatorLaptop.h"
#include "CalculatorLaptopGaming.h"
#include "CalculatorDesktop.h"

int main()
{
    // Creem obiecte de tipul Calculator 
    Calculator calculatorDefault; // apelat prin constructor default
    Calculator calculatorCustom("Lenovo", "Intel i9", "SSD", 240, 16);


    // Creem obiecte de mai multe tipuri

    CalculatorLaptop laptopulPtFaculta; // apeleaza constructorul default de la Calculator

    CalculatorLaptopGaming laptopulLuiVericu; // apeleaza constructorul default de la CalculatorLaptop

    CalculatorDesktop calculatorulDeLaBunici; // apeleaza constructorul default de la Calculator

    Procesor exempluProcesor("Intel", "Core i7-10700K", 3.8, 8); // clasa separata, apeleaza propriul constructor


    // Get the values of the object's member variables using its getters
    int ram = calculatorCustom.getRam();
    int sursa = calculatorCustom.getSursa();
    string gpu = calculatorCustom.getGpu();
    string marca = calculatorCustom.getMarca();
    Procesor procesor = calculatorCustom.getProcesor();
    string stocare = calculatorCustom.getStocare();

    // Output the values of the member variables to the console

    // pt calculator facut cu constructor custom
    cout << "Calculatorul custom: " << "Ram:" << calculatorCustom.getRam() << " Sursa: " << calculatorCustom.getSursa() << " W" << " GPU: " << calculatorCustom.getGpu() << " Marca: " << calculatorCustom.getMarca() << " Model Procesor: " << calculatorCustom.getProcesor().getModel() << " Stocare: " << calculatorCustom.getStocare() << endl;

    // pt calculatorul facut cu constructor default: 
    cout << "Calculatorul default: " << "Ram:" << calculatorDefault.getRam() << " Sursa: " << calculatorDefault.getSursa() << " W" << " GPU: " << calculatorDefault.getGpu() << " Marca: " << calculatorDefault.getMarca() << " Model Procesor: " << calculatorDefault.getProcesor().getModel() << " Stocare: " << calculatorDefault.getStocare() << endl;

}
