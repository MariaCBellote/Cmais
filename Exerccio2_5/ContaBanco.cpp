#include "ContaBanco.h"

ContaBanco::ContaBanco(const std::string& nome): nomeTitular{nome};
{

}

void ContaBanco::setNomeTitular(const std::string& nome){
    nomeTitular=nome;
}

std::string ContaBanco::getNomeTitular() const{
    return nomeTitular;
}