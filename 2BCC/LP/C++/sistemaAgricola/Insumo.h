//Insumo.h

#ifndef INSUMO
    #define INSUMO
#endif // INSUMO

using namespace std;

class Insumo{
private:
    int id;
    string descricao;
    float quantidade;
    float valor;

public:
    //construtores
    Insumo();
    Insumo(int, string, float, float);
    void imprimir();

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

Insumo::Insumo(){
 id = 0;
 descricao = "";
 quantidade = 0.0;
 valor = 0.0;
}

Insumo::Insumo(int id, string descricao, float quantidade, float valor){
    this->id = id;
    this->descricao = descricao;
    this->quantidade = quantidade;
    this->valor = valor;
}

int Insumo::getId(){
    return this->id;
}

string Insumo::getDescricao(){
    return this->descricao;
}

float Insumo::getQuantidade(){
    return this->quantidade;
}

float Insumo::getValor(){
    return this->valor;
}

void Insumo::setId(int id){
    this->id = id;
}

void Insumo::setDescricao(string descricao){
    this->descricao = descricao;
}

void Insumo::setQuantidade(float quantidade){
    this->quantidade = quantidade;
}

void Insumo::setValor(float valor){
    this->valor = valor;
}
