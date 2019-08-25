#include <string>
#include <iostream>
#include "produto.hpp"
using namespace std;


Produto::Produto(string nome, float preco, int codigo)
{
    setNome(nome);
    setPreco(preco);
    setCodigo(codigo);
    cout << "Produto"<< getNome() <<" criado com sucesso" << endl;
}

Produto::~Produto()
{
    cout << "produto apagado" << endl;
}
    void Produto::setNome(string nome){
        this->nome = nome;
    }
    void Produto::setPreco(float preco){
        this->preco = preco;
    }
    void Produto::setCodigo(int codigo){
        int j = 0;
        for (int i=0; i < codigos.size(); i++){
            j = i;
        if (codigo == codigos[i]){
        cout << "codigo já cadastrado" << endl;
        break;
        }
        }
        this->codigo = codigo;
        codigos[j] = codigo;

    }
    string Produto::getNome(){
        return this->nome;
    }
    float Produto::getPreco(){
        return this->preco;
    }
    int Produto::getCodigo(){
        return this->codigo;
    }