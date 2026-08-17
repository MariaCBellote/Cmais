#include <iostream>
#include <format>
#include <string>

class Produto
{
    int codigo;
    double preco;
    int quantidade;
    double percentual;

public:
    void definirDados()
    {
        std::cout << "### Cadastro de Produto ###\n";
        std::cout << "Digite o codigo: ";
        std::cin >> codigo;

        std::cout << "Digite o preco: ";
        std::cin >> preco;

        std::cout << "Digite a quantidade: ";
        std::cin >> quantidade;

        std::cout << "Digite o percentual de desconto: ";
        std::cin >> percentual;
        
    }

    void aplicarDesconto(double per)
    {

        preco = preco * (1 - (per / 100));
        preco= preco*quantidade;
    }

    double calcularValorEstoque()
    {
        return preco * quantidade;
    }

    void exibirDados()
    {
        aplicarDesconto(percentual);
        std::cout << "### Produto ###\n";
        std::string mensagem = std::format(
            "Codigo: {} | Preco: {} | Quantidade: {}",
            codigo, preco, quantidade);

        std::cout << mensagem << "\n";
    }
};

int main()
{
    Produto produto1;
    produto1.definirDados();
    double estoque = produto1.calcularValorEstoque();
    std::cout << " \n";
    produto1.exibirDados();
    std::cout << "Valor total do estoque: R$ " << estoque << '\n';

    return 0;
}