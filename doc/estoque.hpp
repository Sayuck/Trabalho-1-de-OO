#include <string>
#include <iostream>

using namespace std;

class Estoque
{
private:
    int quantidade;
    int cadastrados;
    string tipos;
    

public:
    Estoque(int quantidade, int cadastrados, string tipos);
    ~Estoque();
    void Estoque::setQuantidade(int quantidade);
    void Estoque::setCadastrados(int cadastrados);
    void Estoque::setTipos(string tipos);
    int Estoque::getQuantidade();
    int Estoque::getCadastrados();
    string Estoque::getTipos();
};
