//Data.h
#include <iostream>

using namespace std;

class Data{
private:
    int dia;
    int mes;
    int ano;

public:
    //construtores
    Data();
    Data(int, int, int);
    void imprimir();

    //getters
    int getDia();
    int getMes();
    int getAno();

    //setters
    void setDia(int);
    void setMes(int);
    void setAno(int);
};

Data::Data(){
 dia = 1;
 mes = 1;
 ano = 2022;
}

Data::Data(int dia, int mes, int ano){
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}

void Data::Data::imprimir(){
    cout << "Imprimir Data" << endl;
    cout << "Dia: " << this->dia << endl;
    cout << "Mes: " << this->mes << endl;
    cout << "Ano: " << this->ano << endl;
}

int Data::getDia(){
    return this->dia;
}

int Data::getMes(){
    return this->mes;
}

int Data::getAno(){
    return this->ano;
}

void Data::setDia(int dia){
    this->dia = dia;
}

void Data::setMes(int mes){
    this->mes = mes;
}

void Data::setAno(int ano){
    this->ano = ano;
}
