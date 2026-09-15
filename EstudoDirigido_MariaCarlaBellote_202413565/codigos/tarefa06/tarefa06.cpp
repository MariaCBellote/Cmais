#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Digite o primeiro numero inteiro: ";
    cin >> num1;

    cout << "Digite o segundo numero inteiro: ";
    cin >> num2;

    // Divisão inteira
    cout << "\nDivisao inteira: " << num1 / num2 << endl;

    // Resto da divisão
    cout << "Resto da divisao: " << num1 % num2 << endl;

    // Divisão real
    cout << "Divisao real: " << static_cast<double>(num1) / num2 << endl; //static_cast converte o primeiro numero para double

    // Acumulador
    int acumulador = num1;

    cout << "\nAcumulador inicial: " << acumulador << endl;

    acumulador += num2;
    cout << "Apos += " << num2 << ": " << acumulador << endl;

    acumulador -= num2;
    cout << "Apos -= " << num2 << ": " << acumulador << endl;

    acumulador *= num2;
    cout << "Apos *= " << num2 << ": " << acumulador << endl;

    acumulador /= num2;
    cout << "Apos /= " << num2 << ": " << acumulador << endl;

    return 0;
}