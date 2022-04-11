//AreaPlantio.h

#ifndef AREA_PLANTIO
    #define AREA_PLANTIO
#endif // AREA_PLATIO

#ifndef AGRICULTOR
    #include "Agricultor.h"
#endif // AGRICULTOR

#ifndef INSUMO
    #include "Insumo.h"
#endif // INSUMO

using namespace std;

class AreaPlantio{
private:
    int id;
    Agricultor produtor;
    Insumo insumo;
    float quantidade;
    float valor;

public:
    //construtores
    AreaPlantio();
    AreaPlantio(int, Agricultor, Insumo, float, float);
    void imprimir();

    //getters
    int getId();
    Agricultor getProdutor();
    Insumo getInsumo();
    float getQuantidade();
    float getValor();

    //setters
    void setId(int);
    void setProdutor(Agricultor);
    void setInsumo(Insumo);
    void setQuantidade(float);
    void setValor(float);
};

AreaPlantio::AreaPlantio(){
 id = 0;
 produtor = Agricultor();//estou tendo problemas aqui
 insumo = Insumo();
 quantidade = 0.0;
 valor = 0;
}

AreaPlantio::AreaPlantio(int id, Agricultor produtor, Insumo insumo, float quantidade, float valor){
    this->id = id;
    this->produtor = produtor;
    this->insumo = insumo;
    this->quantidade = quantidade;
    this->valor = valor;
}

int AreaPlantio::getId(){
    return this->id;
}

Agricultor AreaPlantio::getProdutor(){
    return this->produtor;
}

Insumo AreaPlantio::getInsumo(){
    return this->insumo;
}

float AreaPlantio::getQuantidade(){
    return this->quantidade;
}

float AreaPlantio::getValor(){
    return this->valor;
}

void AreaPlantio::setId(int id){
    this->id = id;
}

void AreaPlantio::setProdutor(Agricultor produtor){
    this->produtor = produtor;
}

void AreaPlantio::setInsumo(Insumo insumo){
    this->insumo = insumo;
}

void AreaPlantio::setQuantidade(float quantidade){
    this->quantidade = quantidade;
}

void AreaPlantio::setValor(float valor){
    this->valor = valor;
}
