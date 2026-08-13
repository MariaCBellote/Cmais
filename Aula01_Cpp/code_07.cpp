// Tratamento do restante da linha
#include <iostream>
#include <string>
#include <limits>

 int main()
 {
 int idade;
 std::string nome;

 std::cout << "Digite sua idade: ";
 std::cin >> idade;
 std::cin.ignore(
 std::numeric_limits<std::streamsize>::max(),'\n'
 ); //cin seguido de getline pode dar erro. Usa esse comando para descartar a linha nates de chamar getline
 std::cout << "Digite seu nome: ";
 std::getline(std::cin, nome);
 std::cout << "Nome: " << nome << '\n';
 return 0;
 }
