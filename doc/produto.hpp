#include <string>
#include <iostream>
#include <vector>


using namespace std;
class Produto
{
private:
    string nome;
    float preco;
    int codigo;
    vector <int> codigos;
    


public:
    Produto(string nome, float preco, int codigo);
    ~Produto();
    void Produto::setNome(string nome);
    void Produto::setPreco(float preco);
    void Produto::setCodigo(int codigo);
    string Produto::getNome();
    float Produto::getPreco();
    int Produto::getCodigo();
};
