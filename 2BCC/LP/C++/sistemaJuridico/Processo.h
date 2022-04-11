//Processo.h
#include <iostream>

using namespace std;

class Processo{
private:
    int id;
    string descricao;
    string dataEntrada;
    string horaEntrada;

public:
    //construtores
    Processo();
    Processo(int, string, string, string);
    void imprimir();

    //getters
    int getId();
    string getDescricao();
    string getDataEntrada();
    string getHoraEntrada();

    //setters
    void setId(int);
    void setDescricao(string);
    void setDataEntrada(string);
    void setHoraEntrada(string);
};

Processo::Processo(){
 id = 0;
 descricao = "";
 dataEntrada = "01/01/2022";
 horaEntrada = "00:00";
}

Processo::Processo(int id, string descricao, string dataEntrada, string horaEntrada){
    this->id = id;
    this->descricao = descricao;
    this->dataEntrada = dataEntrada;
    this->horaEntrada = horaEntrada;
}

void Processo::Processo::imprimir(){
    cout << "Imprimir Tipo Processo" << endl;
    cout << "Id: " << this->id << endl;
    cout << "Descricao: " << this->descricao << endl;
    cout << "Data Entrada: " << this->dataEntrada << endl;
    cout << "Hora Entrada: " << this->horaEntrada << endl;
}

int Processo::getId(){
    return this->id;
}

string Processo::getDescricao(){
    return this->descricao;
}

string Processo::getDataEntrada(){
    return this->dataEntrada;
}

string Processo::getHoraEntrada(){
    return this->horaEntrada;
}

void Processo::setId(int id){
    this->id = id;
}

void Processo::setDescricao(string descricao){
    this->descricao = descricao;
}

void Processo::setDataEntrada(string dataEntrada){
    this->dataEntrada = dataEntrada;
}

void Processo::setHoraEntrada(string horaEntrada){
    this->horaEntrada = horaEntrada;
}
