//Produtos.h
#include <iostream>

using namespace std;

class Produtos{
private:
    int id;
    string descricao;
    float quantidade;
    float valor;

public:
    //construtores
    Produtos();
    Produtos(int, string, float, float);
    void imprimir();
    void leia();

    //getters
    int getId();
    string getDescricao();
    float getQuantidade();
    float getValor();

    //setters
    void setId(int);
    void setDescricao(string);
    void setQuantidade(float);
    void setValor(float);
};

Produtos::Produtos(){
 id = 0;
 descricao = "";
 quantidade = 0.0;
 valor = 0.0;
}

Produtos::Produtos(int id, string descricao, float quantidade, float valor){
    this->id = id;
    this->descricao = descricao;
    this->quantidade = quantidade;
    this->valor = valor;
}

void Produtos::Produtos::imprimir(){
    cout << "Imprimir Quantidade Produtos" << endl;
    cout << "Id: " << this->id << endl;
    cout << "Descricao: " << this->descricao << endl;
    cout << "Quantidade: " << this->quantidade << endl;
    cout << "Valor: " << this->valor << endl;
}

void Produtos::leia(){
    cout << "Mudar os valores dos Produtos" << endl;
    cout << "Informe o Id: " << endl;
    cin >> this->id;
    cout << "Informe a Descrição: " << endl;
    cin >> this->descricao;
    cout << "Informe a Quantidade: " << endl;
    cin >> this->quantidade;
    cout << "Informe o Valor: " << endl;
    cin >> this->valor;
    cout << endl;

    cout << "Imprimir Quantidade Produtos Atualizada" << endl;
    cout << "Id: " << this->id << endl;
    cout << "Descricao: " << this->descricao << endl;
    cout << "Quantidade: " << this->quantidade << endl;
    cout << "Valor: " << this->valor << endl;
}

int Produtos::getId(){
    return this->id;
}

string Produtos::getDescricao(){
    return this->descricao;
}

float Produtos::getQuantidade(){
    return this->quantidade;
}

float Produtos::getValor(){
    return this->valor;
}

void Produtos::setId(int id){
    this->id = id;
}

void Produtos::setDescricao(string descricao){
    this->descricao = descricao;
}

void Produtos::setQuantidade(float quantidade){
    this->quantidade = quantidade;
}

void Produtos::setValor(float valor){
    this->valor = valor;
}
