#include <string>
#include <iostream>
#include "estoque.hpp"
using namespace std;


    Estoque::Estoque(int quantidade, int cadastrados, string tipos)
{
    setQuantidade(quantidade);
    setCadastrados(cadastrados);
    setTipos(tipos);
    cout << "produto inserido com sucesso!"<< endl;
}

    Estoque::~Estoque()
{
    cout << "produto apagado!" << endl;
}
    void Estoque::setQuantidade(int quantidade){
        this->quantidade = quantidade;
    }
    void Estoque::setCadastrados(int cadastrados){
        this->cadastrados = cadastrados;
    }
    void Estoque::setTipos(string tipos){
        this->tipos = tipos;
    }
    int Estoque::getQuantidade(){
        return this->quantidade;
    }
    int Estoque::getCadastrados(){
        return this->cadastrados;
    }
    string Estoque::getTipos(){
        return this->tipos;
    }