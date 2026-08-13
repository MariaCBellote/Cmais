#include <iostream>

int main()
{
 int cin = 10;
 std::cout << "Valor da variavel cin: ";
 std::cout << cin << '\n';

 std::cout << "Entrada padrao: ";
 std::string entrada;
 std::cin >> entrada;
 std::cout << "Voce digitou: " << entrada << '\n';

 return 0;
}