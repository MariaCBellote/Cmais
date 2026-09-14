#include <iostream>
#include <limits>
#include <string>

int main() {
    int idade;
    std::string nome;

    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
     // numeric limits + streamize -> ignora uma quatidade maxima de caracteres que estão no buffer até encontrar \n.
    std::cout << "Digite seu nome completo: ";
    std::getline(std::cin, nome);

    std::cout << "\nDados informados:\n";
    std::cout << "Nome: " << nome << "\n";
    std::cout << "Idade: " << idade << "\n";

    return 0;
}
