//TipoInsumo.h

#ifndef TIPO_INSUMO
    #define TIPO_INSUMO
#endif // TIPO_INSUMO

using namespace std;

class tipoInsumo{
private:
    int id;
    string descricao;

public:
    //construtores
    tipoInsumo();
    tipoInsumo(int, string);
    void imprimir();

    //getters
    int getId();
    string getDescricao();

    //setters
    void setId(int);
    void setDescricao(string);
};

tipoInsumo::tipoInsumo(){
 id = 0;
 descricao = "";
}

tipoInsumo::tipoInsumo(int id, string descricao){
    this->id = id;
    this->descricao = descricao;
}

int tipoInsumo::getId(){
    return this->id;
}

string tipoInsumo::getDescricao(){
    return this->descricao;
}

void tipoInsumo::setId(int id){
    this->id = id;
}

void tipoInsumo::setDescricao(string descricao){
    this->descricao = descricao;
}
