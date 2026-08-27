int main(){
    #include <iostream>
#include "produto.h"

int main()
{
    // Criando um produto
    Produto produto(1, 100.00, 10.0, 5);

    // Testando os getters
    std::cout << "Codigo: " << produto.getCod() << "\n";
    std::cout << "Preco: " << produto.getPreco() << "\n";
    std::cout << "Quantidade: " << produto.getQuantidade() << "\n";
    std::cout << "Percentual: " << produto.getPercentual() << "%\n";

    // Calculando valor do estoque
    std::cout << "\nValor do estoque: "
              << produto.calcularValorEstoque() << "\n";

    // Alterando o preco
    produto.setPreco(200.00);

    std::cout << "\nNovo preco: "
              << produto.getPreco() << "\n";

    // Aplicando desconto
    produto.aplicarDesconto(10);

    std::cout << "Preco com desconto: "
              << produto.getPreco() << "\n";

    // Exibindo os dados
    std::cout << "\n";
    produto.exibirDados();

    return 0;
}

}