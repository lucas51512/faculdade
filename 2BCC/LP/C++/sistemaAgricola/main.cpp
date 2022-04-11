#include <iostream>
#include "Funcoes.cpp"

using namespace std;

#ifndef AGRICULTOR
    #include "Agricultor.h"
#endif // AGRICULTOR

#ifndef AREA_PLANTIO
    #include "AreaPlantio.h"
#endif // AREA_PLATIO

#ifndef INSUMO
    #include "Insumo.h"
#endif // INSUMO

#ifndef TIPO_INSUMO
    #include "TipoInsumo.h"
#endif // TIPO_INSUMO


int main(){
    Agricultor produtor1;
    imprimirAgricultor(produtor1);

    AreaPlantio area1;
    imprimirAreaPlantio(area1);

    Insumo insumo1;
    imprimirInsumo(insumo1);

    tipoInsumo tipoInsumo1;
    imprimirTipoInsumo(tipoInsumo1);

}
