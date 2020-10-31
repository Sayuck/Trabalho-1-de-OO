#include <iostream>
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
    string getNome();
    void setNome(string nome);
    string getEmail();
    void setEmail(string email);
    int getTelefone();
    void setTelefone(int telefone);
    int getCpf();
    void setCpf(long int cpf);
    bool isSocio();
    void setSocio(bool socio);
};