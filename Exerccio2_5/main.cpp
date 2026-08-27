#include <iostream>
#include "ContaBanco.h"

int main()
{
    ContaBanco conta("Maria");
    std::cout << "Titular: "
              <<conta.getNomeTitular()
              <<'\n';

    return 0;
}


