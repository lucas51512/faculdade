//FUNCOES.CPP
#include <iostream>
#ifndef AGRICULTOR
    #include "Agricultor.h"
#endif // AGRICULTOR

#ifndef AREA_PLATIO
    #include "AreaPlantio.h"
#endif // AREA_PLATIO

#ifndef INSUMO
    #include "Insumo.h"
#endif // INSUMO

#ifndef TIPO_INSUMO
    #include "TipoInsumo.h"
#endif // TIPO_INSUMO




using namespace std;

string imprimirAgricultor(Agricultor agricultor){
    cout << "Imprimir Agricultor" << endl;
    cout << "Id: " << agricultor.getId() << endl;
    cout << "Cidade: " << agricultor.getCidade() << endl;
     cout << "Agricultor: " << agricultor.getNome() << endl;
    cout << "Bairro: " << agricultor.getBairro() << endl;
    cout << "Idade: " << agricultor.getIdade() << endl;
    cout << endl << endl;
}

string imprimirInsumo(Insumo insumo){
    cout << "Imprimir Insumo" << endl;
    cout << "Id: " << insumo.getId() << endl;
    cout << "Descricao: " << insumo.getDescricao() << endl;
    cout << "Quantidade: " << insumo.getQuantidade() << endl;
    cout << "Valor: " << insumo.getValor() << endl;
    cout << endl << endl;
}

string imprimirTipoInsumo(tipoInsumo tipoInsumo){
    cout << "Imprimir Tipo Insumo" << endl;
    cout << "Id: " << tipoInsumo.getId() << endl;
    cout << "Descricao: " << tipoInsumo.getDescricao() << endl;
    cout << endl << endl;
}

string imprimirAreaPlantio(AreaPlantio areaPlantio){
    cout << "Imprimir Area Plantio" << endl;
    cout << "Id: " << areaPlantio.getId() << endl;
    cout << "Produtor: " << areaPlantio.getProdutor().getNome() << endl;
    cout << "Insumo: " << areaPlantio.getInsumo().getId() << endl;
    cout << "Quantidade: " << areaPlantio.getQuantidade() << endl;
    cout << "Valor: " << areaPlantio.getValor() << endl;
    cout << endl << endl;
}
