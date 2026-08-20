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
        this->titulo = setTitulo(titulo);
        this->autor = setAutor(autor);
        if(anoPublicado>0){
         this->anoPublicado = setAno(anoPublicado);
        }
        
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


}