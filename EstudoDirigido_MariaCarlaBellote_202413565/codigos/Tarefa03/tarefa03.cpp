#include <iostream>

int main() {
    int cin, cout;
    cin=1;
    cout=10;

    std::cout << "Valor da variavel local cout: " << cout << std::endl;
    std::cout << "Valor da variavel local cin: " << cin << std::endl;

     std::cout << "Digite um numero: ";
     int numero;
     std::cin >> numero;
     std::cout << "Numero digitado: " << numero << std::endl;

    return 0;

    
    /*
     * cin e cout nao sao palavras-chave reservadas da linguagem C++.
     * Eles sao nomes de objetos da biblioteca padrao dentro do
     * namespace std. Por isso, podemos criar variaveis locais com
     * esses mesmos nomes. A qualificacao std::cin e std::cout
     * permite acessar os objetos da biblioteca sem ambiguidade.
     */
}