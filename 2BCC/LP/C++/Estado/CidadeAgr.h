//CidadeAgr.h
//exemplo de agregação

#ifndef ESTADO_H
    #include "Estado.h"
#endif // ESTADO_H

#ifndef CIDADEAGR_H
    #define CIDADEAGR_H
#endif // CIDADEAGR_H


class CidadeAgr {
    private:
      int id;
      string descricao;
      Estado estado;
    public:
        CidadeAgr(): id(0), descricao(""), estado(Estado()){}
        CidadeAgr(int, string, Estado );

        Estado getEstado() {return this->estado;}
        void setEstado(Estado estado){this->estado = estado;}

        int getId() {return this->id;}
        string getDescricao() {return this->descricao;}

};

CidadeAgr::CidadeAgr(int id, string descricao, Estado estado){
    this->id = id;
    this->descricao = descricao;
    this->estado = estado;
}




