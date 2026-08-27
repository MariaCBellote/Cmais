#ifdef CONTABANCO_H
#define CONTABANCO_H
#include <string>

class ContaBanco{
    private:
        std::string nomeTitular;

    public:
        ContaBanco(const std::string& nome);

        void setNomeTitular(const std::string& nome);
        std::string getNomeTitular() const;
};


#endif