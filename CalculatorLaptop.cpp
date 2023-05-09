#include "CalculatorLaptop.h"

CalculatorLaptop::CalculatorLaptop() : batteryLife(0), weight(0.0) {}

CalculatorLaptop::CalculatorLaptop(int b, double w) : Calculator(), batteryLife(b), weight(w) {}

CalculatorLaptop::~CalculatorLaptop() {}
