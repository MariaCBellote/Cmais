#ifdef PRODUTO_H
#define PRODUTO_H
#include <string>

class Produto{
    private:
    int codigo;
    double preco;
    int quantidade;
    double percentual;


    public:

    // GET e SET PREÇO
    double getPreco() const;
    void setPreco(double novoPreco);

      


    // GET e SET CÓDIGO
    int getCod() const;
    void setCod(int novoCodigo);
      

    // GET e SET QUANTIDADE
    int getQuantidade() const; 
    void setQuantidade(int novoQuantidade);
    
    

    // GET e SET PERCENTUAL
    double getPercentual() const ;
    void setPercentual(double novoPercentual);
       

     // FUNÇÃO PARA DEFINIR OS DADOS
    void definirDados();
    void aplicarDesconto(double per);
    double calcularValorEstoque();
    void exibirDados();
   
};


#endif