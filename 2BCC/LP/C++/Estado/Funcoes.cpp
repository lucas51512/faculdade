//FUNCOES.CPP
#include <iostream>
using namespace std;

void ImprimirEstado(Estado estado){
    cout << "\nImprimir Estado\n";
    cout << "ID: " << estado.getEstadoId() << endl;
    cout << "Descricao: " << estado.getEstadoDescricao() << endl;
}

void ImprimirCidadeHer(CidadeHer cidade){
    cout << "\nImprimir Cidade\n";
    cout << "ID Estado: " << cidade.getEstadoId() << endl;
    cout << "Descricao Estado: " << cidade.getEstadoDescricao() << endl;
    cout << "ID Cidade: " << cidade.getId()<< endl;
    cout << "Descricao Cidade: " << cidade.getDescricao() << endl;
}

void ImprimirCidadeAgr(CidadeAgr cidade){
    cout << "\nImprimir Cidade\n";
    cout << "ID Estado: " << cidade.getEstado().getEstadoId() << endl;
    cout << "Descricao Estado: " << cidade.getEstado().getEstadoDescricao() << endl;
    cout << "ID Cidade: " << cidade.getId() << endl;
    cout << "Descricao Cidade: " <<cidade.getDescricao()<< endl;
}
