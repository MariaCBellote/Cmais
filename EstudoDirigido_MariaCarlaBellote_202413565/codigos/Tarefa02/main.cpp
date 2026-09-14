#include <iostream>
#include "math_utils.hpp"

int main() {
    double raio = 5.0;
    double numero1 = 10.0;
    double numero2 = 20.0;

    std::cout << "Area do circulo: "
              << areaCirculo(raio) << std::endl;

    std::cout << "Media aritmetica: "
              << mediaAritmetica(numero1, numero2) << std::endl;

    return 0;
}
