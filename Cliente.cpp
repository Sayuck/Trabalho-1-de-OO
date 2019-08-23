#include <iostream>
#include "Cliente.hpp"


Cliente::Cliente(string nome, long int cpf)
{
    setNome(nome);
    setCpf(cpf);
    setEmail("naocadastrado");
    setSocio(false);
    setTelefone(00000000);
cout<< "Cliente criado com sucesso"<<this->nome<<"Possui cadastro agora"<< endl;
}

Cliente::~Cliente()
{
    cout << "cliente deletado" << endl;
}
    string Cliente::getNome(){
        return this->nome;

    }
    void Cliente::setNome(string nome){
        this->nome = nome;
    }
    string Cliente::getEmail(){
        return this->email;
    }
    void Cliente::setEmail(string email){
        this->email = email;
    }
    int Cliente::getTelefone(){
        return telefone;
    }
    void Cliente::setTelefone(int telefone){
        this->telefone = telefone;

    }
    int Cliente::getCpf(){
        return cpf;
    }
    void Cliente::setCpf(long int cpf){
        this->cpf = cpf;
    }
    bool Cliente::isSocio(){
        return this->socio;
    }
    void Cliente::setSocio(bool socio){
        this->socio = socio;
    }