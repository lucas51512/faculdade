//Vara.h
#include <iostream>

using namespace std;

class Vara{
private:
    int id;
    string processo;
    string advogado;
    string juiz;
    string valorCausa;

public:
    //construtores
    Vara();
    Vara(int, string, string, string, string);
    void imprimir();

    //getters
    int getId();
    string getProcesso();
    string getAdvogado();
    string getJuiz();
    string getValorCausa();

    //setters
    void setId(int);
    void setProcesso(string);
    void setAdvogado(string);
    void setJuiz(string);
    void setValorCausa(string);
};

Vara::Vara(){
 id = 0;
 processo = "";
 advogado = "";
 juiz = "";
 valorCausa = "";
}

Vara::Vara(int id, string processo, string advogado, string juiz, string valorCausa){
    this->id = id;
    this->processo = processo;
    this->advogado = advogado;
    this->juiz = juiz;
    this->valorCausa = valorCausa;
}

void Vara::Vara::imprimir(){
    cout << "Imprimir Vara" << endl;
    cout << "Id: " << this->id << endl;
    cout << "Processo: " << this->processo << endl;
    cout << "Advogado: " << this->advogado << endl;
    cout << "Juiz: " << this->juiz << endl;
    cout << "Valor Causa: " << this->valorCausa << endl;
}

int Vara::getId(){
    return this->id;
}

string Vara::getProcesso(){
    return this->processo;
}

string Vara::getAdvogado(){
    return this->advogado;
}

string Vara::getJuiz(){
    return this->juiz;
}

string Vara::getValorCausa(){
    return this->valorCausa;
}

void Vara::setId(int id){
    this->id = id;
}

void Vara::setProcesso(string processo){
    this->processo = processo;
}

void Vara::setAdvogado(string advogado){
    this->advogado = advogado;
}

void Vara::setJuiz(string juiz){
    this->juiz = juiz;
}

void Vara::setValorCausa(string valorCausa){
    this->valorCausa = valorCausa;
}
