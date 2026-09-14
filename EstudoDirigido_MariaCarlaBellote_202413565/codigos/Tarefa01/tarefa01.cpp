#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "Nome do programa: " << argv[0] << std::endl;
    std::cout << "Quantidade total de argumentos: " << argc << std::endl;

    return 0;
}


//argc armazana a quantidade de argumentos digitada, conta com o nome (ex: ./tarefa01.cpp)
//argv [] array que guarda os argumentos

/*
Execução:

$ g++ tarefa01.cpp -o programa01
$ ./programa01 teste1 123


*/