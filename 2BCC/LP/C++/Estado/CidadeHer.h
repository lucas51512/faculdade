//Cidade1.h
//exemplo de herança pura

#ifndef ESTADO_H
    #include "Estado.h"
#endif // ESTADO_H

#ifndef CIDADEHER_H
   #define CIDADEHER_H
#endif // CIDADEHER_H

class CidadeHer: public Estado {
    private:
      int id;
      string descricao;
    public:
        CidadeHer(): Estado(), id(0), descricao(""){}
        CidadeHer(int, string, int, string);
        CidadeHer(Estado, int, string);
        int getId() {return this->id;}
        string getDescricao() {return this->descricao;}

};

CidadeHer::CidadeHer(int idEst, string desEst, int idCid, string desCid){
    Estado::id = idEst;
    Estado::descricao = desEst;
    this->id = idCid;
    this->descricao = desCid;
}

CidadeHer::CidadeHer(Estado estado, int id, string descricao){
    Estado::id = estado.getEstadoId();
    Estado::descricao = estado.getEstadoDescricao();
    this->id = id;
    this->descricao = descricao;
}



