#include "produto.h"
#include <iostream>
#include <format>

Produto::Produto(int c, double p, double perc, int quant)
    : codigo{c}, preco{p}, percentual{perc}, quantidade{quant}
{
}

// GET e SET PREÇO
double Produto::getPreco() const
{
    return preco;
}

void Produto::setPreco(double novoPreco)
{
    if (novoPreco < 0) {
        std::cout << "Preço inválido!\n";
    }
    else {
        preco = novoPreco;
    }
}

// GET e SET CÓDIGO
int Produto::getCod() const
{
    return codigo;
}

void Produto::setCod(int novoCodigo)
{
    if (novoCodigo < 0) {
        std::cout << "Código inválido!\n";
    }
    else {
        codigo = novoCodigo;
    }
}

// GET e SET QUANTIDADE
int Produto::getQuantidade() const
{
    return quantidade;
}

void Produto::setQuantidade(int novoQuantidade)
{
    if (novoQuantidade < 0) {
        std::cout << "Quantidade inválida!\n";
    }
    else {
        quantidade = novoQuantidade;
    }
}

// GET e SET PERCENTUAL
double Produto::getPercentual() const
{
    return percentual;
}

void Produto::setPercentual(double novoPercentual)
{
    if (novoPercentual < 0) {
        std::cout << "Percentual inválido!\n";
    }
    else {
        percentual = novoPercentual;
    }
}

// FUNÇÃO PARA DEFINIR OS DADOS
void Produto::definirDados()
{
    int novoCodigo;
    double novoPreco;
    int novaQuantidade;
    double novoPercentual;

    std::cout << "### Cadastro de Produto ###\n";

    std::cout << "Digite o codigo: ";
    std::cin >> novoCodigo;
    setCod(novoCodigo);

    std::cout << "Digite o preco: ";
    std::cin >> novoPreco;
    setPreco(novoPreco);

    std::cout << "Digite a quantidade: ";
    std::cin >> novaQuantidade;
    setQuantidade(novaQuantidade);

    std::cout << "Digite o percentual de desconto: ";
    std::cin >> novoPercentual;
    setPercentual(novoPercentual);
}

// APLICA DESCONTO
void Produto::aplicarDesconto(double per)
{
    preco = preco * (1 - (per / 100));
}

// CALCULA VALOR DO ESTOQUE
double Produto::calcularValorEstoque()
{
    return preco * quantidade;
}

// EXIBE DADOS
void Produto::exibirDados()
{
    aplicarDesconto(percentual);

    std::cout << "### Produto ###\n";

    std::string mensagem = std::format(
        "Codigo: {} | Preco: {:.2f} | Quantidade: {}",
        getCod(),
        getPreco(),
        getQuantidade()
    );

    std::cout << mensagem << "\n";
}
