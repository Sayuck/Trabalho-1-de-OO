#include <string>
using namespace std;

class Cliente
{
private:
    string nome;
    string email;
    int telefone;
    long int cpf;
    bool socio;
public:
    Cliente(string nome, long int cpf);
    ~Cliente();
};

Cliente::Cliente(string nome, long int cpf)
{
    this->nome = nome;
    this->cpf = cpf;
    this->email = "naocadastrado";
    this->socio = false;
    this->telefone = NULL;
cout<< "Cliente criado com sucesso"<<this->nome<<"Possui cadastro agora"<< endl;
}

Cliente::~Cliente()
{
    free(Cliente);
}
