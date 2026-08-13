#include <iostream>
 #include <string>

 int main()
 {
 std::string nome_completo;
 std::cout << "Digite seu nome completo: ";
 std::getline(std::cin, nome_completo); //entrada usando getline, pega a linha inteira
 std::cout << "Bem-vindo, " << nome_completo << "!\n";
 return 0;
}
