#include <iostream>
#include <string>
#include <format>


class Livro {
private:
    std::string titulo;
    std::string autor;
    int anoPublicado;

public:

    // Getter do título
    std::string getTitulo() const {
        return titulo;
    }

    // Setter do título
    void setTitulo(std::string titulo) {
        this->titulo = titulo;
    }

    // Getter do autor
    std::string getAutor() const {
        return autor;
    }

    // Setter do autor
    void setAutor(std::string autor) {
        this->autor = autor;
    }

    // Getter do ano
    int getAno() const {
        return anoPublicado;
    }

    // Setter do ano
    void setAno(int anoPublicado) {
        this->anoPublicado = anoPublicado;
    }

    // Construtor padrão
    Livro() {
    }

    // Construtor parametrizado
  Livro(std::string titulo, std::string autor, int anoPublicado) {
    setTitulo(titulo);
    setAutor(autor);

    if (anoPublicado > 0) {
        setAno(anoPublicado);
    }
}

/*

Livro(std::string titulo, std::string autor, int anoPublicado)
    : titulo(titulo), autor(autor), anoPublicado(anoPublicado)
{
}


Com condicional:
Livro(std::string titulo, std::string autor, int anoPublicado)
    : titulo(titulo),
      autor(autor),
      anoPublicado(anoPublicado > 0 ? anoPublicado : 0)
{
}


OU

Livro(std::string titulo, std::string autor, int anoPublicado)
    : titulo(titulo),
      autor(autor),
      anoPublicado(0)
{
    if (anoPublicado > 0) {
        this->anoPublicado = anoPublicado;
    }
    else {
        std::cout << "Ano inválido!\n";
    }
}

*/

void pedirDados(){
    std::string nome, autor;
    int ano;
    std::cout << "Diga o nome do livro:\n";
    std::getline(std::cin >> nome);
    setTitulo(nome);
    std::cout << "Diga o nome do autor:\n";
     std::getline(std::cin >> autor);
    setAutor(autor);
    std::cout << "Diga o ano de publicação:\n";
     std::getline(std::cin >> ano);
    setAno(ano);
    
}


    void imprimirDados(){
         std::cout << "### Livro ###\n";
        std::string mensagem = std::format(
            "Titulo: {} | Autor: {} | Ano de publicação: {}",
            getTitulo(), getAutor(), getAno());

        std::cout << mensagem << "\n";
    }
};

int main(){
    Livro livro1;
    Livro livro2("Computação","Jose",2018);
    livro2.imprimirDados();
    livro1.pedirDados();
    livro1.imprimirDados();


}
