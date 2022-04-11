//Principal.cpp
#include <iostream>
using namespace std;

#ifndef ESTADO_H
    #include "Estado.h"
#endif // ESTADO_H

#ifndef CIDADEHER_H
    #include "CidadeHer.h"
#endif // CIDADEHER_H

#ifndef CIDADEAGR_H
    #include "CidadeAgr.h"
#endif // CIDADEAGR_H

#include "Funcoes.cpp"




int main() {
    Estado estado1;
    ImprimirEstado(estado1);

    Estado estado2(10, "SP");
    ImprimirEstado(estado2);

    estado1.setId(16);
    estado1.setDescricao("PR");
    ImprimirEstado(estado1);

    CidadeHer cidade1;
    ImprimirCidadeHer(cidade1);

    CidadeHer cidade2(12, "SP", 16, "Assis");
    ImprimirCidadeHer(cidade2);

    CidadeHer cidade3 (Estado(14, "SP"), 34, "Candido Mota");
    ImprimirCidadeHer(cidade3);

    CidadeHer cidade4 (estado2, 28, "Palmital");
    ImprimirCidadeHer(cidade4);

    CidadeAgr cidade5(16, "Paraguacu", estado2);
    ImprimirCidadeAgr(cidade5);

    CidadeAgr cidade6(17, "Echapora", estado2);
    ImprimirCidadeAgr(cidade6);

    estado2.setDescricao("PR");
    ImprimirEstado(estado2);

};
