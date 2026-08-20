class Produto{
    private:
    double preco;

    public:
    double getPreco() const{
        return preco;
    }

    void setPreco(double novoPreco){
        preco=novoPreco;
    }
}; //classe termina com ;

int main(){
Produto produto;
double valor = produto.getPreco();


}