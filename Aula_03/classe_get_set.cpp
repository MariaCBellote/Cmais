#include <iostream>
#include <format>
#include <string>

class Produto
{
private:
    int codigo;
    double preco;
    int quantidade;
    double percentual;

public:

    // GET e SET PREÇO
    double getPreco() const {
        return preco;
    }

    void setPreco(double novoPreco) {
        if (novoPreco < 0) {
            std::cout << "Preço inválido!\n";
        }
        else {
            preco = novoPreco;
        }
    }

    // GET e SET CÓDIGO
    int getCod() const {
        return codigo;
    }

    void setCod(int novoCodigo) {
        if (novoCodigo < 0) {
            std::cout << "Código inválido!\n";
        }
        else {
            codigo = novoCodigo;
        }
    }

    // GET e SET QUANTIDADE
    int getQuantidade() const {
        return quantidade;
    }

    void setQuantidade(int novoQuantidade) {
        if (novoQuantidade < 0) {
            std::cout << "Quantidade inválida!\n";
        }
        else {
            quantidade = novoQuantidade;
        }
    }

    // GET e SET PERCENTUAL
    double getPercentual() const {
        return percentual;
    }

    void setPercentual(double novoPercentual) {
        if (novoPercentual < 0) {
            std::cout << "Percentual inválido!\n";
        }
        else {
            percentual = novoPercentual;
        }
    }

    // FUNÇÃO PARA DEFINIR OS DADOS
    void definirDados()
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

    void aplicarDesconto(double per)
    {
        preco = preco * (1 - (per / 100));
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
            "Codigo: {} | Preco: {:.2f} | Quantidade: {}",
            getCod(),
            getPreco(),
            getQuantidade()
        );

        std::cout << mensagem << "\n";
    }
};

int main()
{
    Produto produto1;

    produto1.definirDados();

    double estoque = produto1.calcularValorEstoque();

    std::cout << "\n";

    produto1.exibirDados();

    std::cout << "Valor total do estoque: R$ "
              << estoque << '\n';

    return 0;
}
