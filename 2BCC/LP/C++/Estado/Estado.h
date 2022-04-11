//Estado.h

#ifndef ESTADO_H
    #define ESTADO_H
#endif // ESTADO_H

class Estado{
    protected:
      int id;
      string descricao;
    public:
      Estado():id(0), descricao(""){}
      Estado(int id, string descricao): id(id), descricao(descricao){}

      int getEstadoId() {return this->id;}
      string getEstadoDescricao() {return this->descricao;}

      void setId(int id) {this->id = id;}
      void setDescricao(string descricao) {this->descricao = descricao;}

};

