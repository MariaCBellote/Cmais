#include <iostream>

 class ContaBanco {
 public:
 void exibirMensagem() {
 std::cout << "Conta bancaria criada.\n";
 }
 };

int main()
{
 ContaBanco conta;
 conta.exibirMensagem();

 return 0;
}