#include "Data.h";
#include "TipoProcesso.h";
#include "Processo.h";
#include "Vara.h";
#include "Advogado.h";

int main(){
    Data data1;
    data1.imprimir();

    Data data2(3, 8, 1991);
    data2.imprimir();

    Data data3(4, 8, 2002);
    data3.imprimir();

    data3.setAno(2112);
    data3.imprimir();

    tipoProcesso tipoProcesso1;
    tipoProcesso1.imprimir();

    tipoProcesso tipoProcesso2(57, "Teste");
    tipoProcesso2.imprimir();

    tipoProcesso2.setId(62);
    tipoProcesso2.setDescricao("Teste 2");
    tipoProcesso2.imprimir();

    Processo processo1;
    processo1.imprimir();

    Processo processo2(80, "Processo Teste 1", "04/09/2019", "01:59");
    processo2.imprimir();

    processo2.setHoraEntrada("09:11");
    processo2.setDataEntrada("08/12/2002");
    processo2.imprimir();

    Vara vara1;
    vara1.imprimir();

    Vara vara2(99, "Processo por Abuso de Autoridade", "Fernando", "Alberto", "1600");
    vara2.imprimir();

    vara2.setId(100);
    vara2.setProcesso("Processo por roubo");
    vara2.setAdvogado("Rose");
    vara2.setJuiz("Arnaldo");
    vara2.setValorCausa("3200");
    vara2.imprimir();

    Advogado advogado1;
    advogado1.imprimir();

    Advogado advogado2(1, "Chico", "Assis", "SP", 36);
    advogado2.imprimir();

    advogado2.setNome("Alberto");
    advogado2.setCidade("Sao Paulo");
    advogado2.setEstado("MG");
    advogado2.setIdade(45);
    advogado2.imprimir();

}
