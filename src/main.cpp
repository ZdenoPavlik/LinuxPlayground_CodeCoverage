#include <iostream>
#include "Calculator.h"

int main(int argc, char **argv)
{
    Calculator calc;
    std::cout << "Scitavanie 1+5 =" << calc.scitaj(1, 5) << std::endl;
    std::cout << "Odcitavanie 5-1 =" << calc.odcitaj(5, 1) << std::endl;
    std::cout << "Delenie 10/2 = " << calc.vydel(10, 2) << std::endl;
    std::cout << "Nasobenie 2*3 = " << calc.vynasob(2, 3) << std::endl;

    return 0;
}