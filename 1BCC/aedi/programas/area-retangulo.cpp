/*  Aluno: Lucas Barbosa Brancalh�o
    Data:�ltima Atualiza��o
    Horas:20:04
    areaRetangulo.cpp
    Descri��o: Programa para calcular a area de um tri�ngulo
*/

#include <iostream> // bibliotecass b�sicas da linguagem
#include <locale.h>
using namespace std;
int main(){
    setlocale(LC_ALL, "Portuguese");
    float base, altura, area;
    cout << "Programa Calcular �rea do Tri�ngulo Ret�ngulo"<<endl;
    cout << "Informe a base: ";
    cin >> base;
    cout << "Informe a altura: ";
    cin >> altura;

    area = base * altura / 2;

    cout << "�rea: " << area;

}
