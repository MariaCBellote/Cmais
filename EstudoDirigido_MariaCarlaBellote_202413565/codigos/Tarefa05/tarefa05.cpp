#include <iostream>
#include <typeinfo>

int main() {

    // Inicialização por lista usando chaves {}
    int idade{20};
    double altura{1.75};
    char letra{'A'};

    std::cout << "Idade: " << idade << "\n";
    std::cout << "Altura: " << altura << "\n";
    std::cout << "Letra: " << letra << "\n";

    // A inicialização por lista impede conversões estreitantes.
    // A linha abaixo causaria ERRO de compilação:
    // int numero{10.5}; //erro
     int numero = 10.5; // perde a casa decimal apos o ponto

     std::cout << "\nNovo valor de numeroInteiro: "
              << numero << "\n";

    // Dedução automática de tipos utilizando auto
    auto numeroInteiro{10};
    auto numeroDecimal{10.5};
    auto texto{"Ola"};

    std::cout << "\nValores utilizando auto:\n";
    std::cout << "numeroInteiro: " << numeroInteiro << "\n";
    std::cout << "numeroDecimal: " << numeroDecimal << "\n";
    std::cout << "texto: " << texto << "\n";

    // O tipo de uma variável auto é definido na inicialização
    // e permanece fixo durante toda a execução.
    numeroInteiro = 50;

    std::cout << "\nNovo valor de numeroInteiro: "
              << numeroInteiro << "\n";

    // A variável continua sendo do tipo int.
    // Ela não muda de tipo apenas porque recebeu outro valor.

    return 0;
}
