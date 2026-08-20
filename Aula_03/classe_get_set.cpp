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
    //get e set preco
    double getPreco() const{
        return preco;
    }

    void setPreco(double novoPreco){
        std::cin >> novoPreco;
        if(novoPreco<0){
            std::cout << "Preço inválido!\n";
        }
        else{
            preco=novoPreco;
        }
       
    }
    
    //get e set codigo
    double getCod() const{
        return codigo;
    }

    void setCod(double novoCodigo){
        std::cin >> novoCodigo;
          if(novoCodigo<0){
            std::cout << "Código inválido!\n";
        }
        else{
           codigo=novoCodigo;
        }
        
    }

    //get e set quantidade
    double getQuantidade() const{
        return quantidade;
    }

    void setQuantidade(double novoQuantidade){
        std::cin >>novoQuantidade;
          if(novoQuantidade<0){
            std::cout << "Qunatidade inválida!\n";
        }
        else{
           quantidade=novoQuantidade;
        }
        
    }

    //get e set percentual
    double getPercentual() const{
        return percentual;
    }

    void setPercentual(double novoPercentual){
         std::cin >>novoPercentual;
          if(percentnoual<0){
            std::cout << "Percentual inválido!\n";
        }
        else{
            percentual=novoPercentual;
        }
        
    }

    //funções
    void definirDados()
    {
        std::cout << "### Cadastro de Produto ###\n";
        std::cout << "Digite o codigo: "; 
        setCod(codigo);

        std::cout << "Digite o preco: ";
        setPreco(preco);

        std::cout << "Digite a quantidade: ";
        setQuantidade(quantidade);

        std::cout << "Digite o percentual de desconto: ";
        setPercentual(percentual);
        
    }

    void aplicarDesconto(double per)
    {

        preco = preco * (1 - (per / 100))*quantidade;
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
            getCod(codigo), getPreco(preco), getQuantidade(quantidade));

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