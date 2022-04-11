//Conta.h
#include <iostream>
using namespace std;

//interface
class Conta{
    private:
        int numConta;
        string titular;
        float saldo;
    public:
        Conta();
        Conta(int, string, float);
        Conta(int, string);
        void imprimir();

        //get
        int getNumConta();
        string getTitular();
        float getSaldo();

        //set
        void setNumConta(int);
        void setTitular(string);
        void setSaldo(float);
};

Conta::Conta(){
    numConta = 0;
    titular = "";
    saldo = 0;
}

Conta::Conta(int numConta, string titular, float saldo){
    this->numConta = numConta;
    this->titular = titular;
    this->saldo = saldo;
}

Conta::Conta(int numConta, string titular){
    this->numConta = numConta;
    this->titular = titular;
    this->saldo = 0;
}

void Conta::imprimir(){
    cout << "\nImprimir Conta\n";
    cout << "Numero Conta: " << this->numConta << endl;
    cout << "Titular: " << this->titular << endl;
    cout << "Saldo: " << this->saldo << endl;
}

int Conta::getNumConta(){
    return this->numConta;
}

string Conta::getTitular(){
    return this->titular;
}

float Conta::getSaldo(){
    return this->saldo;
}

void Conta::setNumConta(int numConta){
        this->numConta = numConta;
}

void Conta::setTitular(string titular){
    this->titular = titular;
}

void Conta::setSaldo(float saldo){
    this->saldo = saldo;
}

