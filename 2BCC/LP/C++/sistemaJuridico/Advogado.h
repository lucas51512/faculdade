//Avogado.h
#include <iostream>

using namespace std;

class Advogado{
private:
    int id;
    string nome;
    string cidade;
    string estado;
    int idade;

public:
    //construtores
    Advogado();
    Advogado(int, string, string, string, int);
    void imprimir();

    //getters
    int getId();
    string getNome();
    string getCidade();
    string getEstado();
    int getIdade();

    //setters
    void setId(int);
    void setNome(string);
    void setCidade(string);
    void setEstado(string);
    void setIdade(int);
};

Advogado::Advogado(){
 id = 0;
 nome = "";
 cidade = "";
 estado = "";
 idade = 18;
}

Advogado::Advogado(int id, string nome, string cidade, string estado, int idade){
    this->id = id;
    this->nome = nome;
    this->cidade = cidade;
    this->estado = estado;
    this->idade = idade;
}

void Advogado::Advogado::imprimir(){
    cout << "Imprimir Advogado" << endl;
    cout << "Id: " << this->id << endl;
    cout << "Advogado: " << this->nome << endl;
    cout << "Cidade: " << this->cidade << endl;
    cout << "Estado: " << this->estado << endl;
    cout << "Idade: " << this->idade << endl;
}

int Advogado::getId(){
    return this->id;
}

string Advogado::getNome(){
    return this->nome;
}

string Advogado::getCidade(){
    return this->cidade;
}

string Advogado::getEstado(){
    return this->estado;
}

int Advogado::getIdade(){
    return this->idade;
}

void Advogado::setId(int id){
    this->id = id;
}

void Advogado::setNome(string nome){
    this->nome = nome;
}

void Advogado::setCidade(string cidade){
    this->cidade = cidade;
}

void Advogado::setEstado(string estado){
    this->estado = estado;
}

void Advogado::setIdade(int idade){
    this->idade = idade;
}
