//Agricultor.h

#ifndef AGRICULTOR
    #define AGRICULTOR
#endif // AGRICULTOR

using namespace std;

class Agricultor{
private:
    int id;
    string cidade;
    string nome;
    string bairro;
    int idade;

public:
    //construtores
    Agricultor();
    Agricultor(int, string, string, string, int);
    //getters
    int getId();
    string getCidade();
    string getNome();
    string getBairro();
    int getIdade();

    //setters
    void setId(int);
    void setCidade(string);
    void setNome(string);
    void setBairro(string);
    void setIdade(int);
};

Agricultor::Agricultor(){
 id = 0;
 cidade = "";
 nome = "";
 bairro = "";
 idade = 18;
}

Agricultor::Agricultor(int id, string cidade, string nome, string bairo, int idade){
    this->id = id;
    this->cidade = cidade;
    this->nome = nome;
    this->bairro = bairro;
    this->idade = idade;
}

int Agricultor::getId(){
    return this->id;
}

string Agricultor::getCidade(){
    return this->cidade;
}

string Agricultor::getNome(){
    return this->nome;
}

string Agricultor::getBairro(){
    return this->bairro;
}

int Agricultor::getIdade(){
    return this->idade;
}

void Agricultor::setId(int id){
    this->id = id;
}

void Agricultor::setCidade(string cidade){
    this->cidade = cidade;
}

void Agricultor::setNome(string nome){
    this->nome = nome;
}

void Agricultor::setBairro(string bairro){
    this->bairro = bairro;
}

void Agricultor::setIdade(int idade){
    this->idade = idade;
}
