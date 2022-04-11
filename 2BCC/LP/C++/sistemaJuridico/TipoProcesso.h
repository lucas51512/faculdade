//TipoProcesso.h
#include <iostream>

using namespace std;

class tipoProcesso{
private:
    int id;
    string descricao;

public:
    //construtores
    tipoProcesso();
    tipoProcesso(int, string);
    void imprimir();

    //getters
    int getId();
    string getDescricao();

    //setters
    void setId(int);
    void setDescricao(string);
};

tipoProcesso::tipoProcesso(){
 id = 0;
 descricao = "";
}

tipoProcesso::tipoProcesso(int id, string descricao){
    this->id = id;
    this->descricao = descricao;
}

void tipoProcesso::tipoProcesso::imprimir(){
    cout << "Imprimir Tipo Processo" << endl;
    cout << "Id: " << this->id << endl;
    cout << "Descricao: " << this->descricao << endl;
}

int tipoProcesso::getId(){
    return this->id;
}

string tipoProcesso::getDescricao(){
    return this->descricao;
}

void tipoProcesso::setId(int id){
    this->id = id;
}

void tipoProcesso::setDescricao(string descricao){
    this->descricao = descricao;
}
