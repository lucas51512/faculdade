/*  Aluno: Lucas Barbosa Brancalhão
    Data:Última Atualização
    Horas:20:04
    areaRetangulo.cpp
    Descrição: Programa para calcular a area de um triângulo
*/

#include <iostream> // bibliotecass básicas da linguagem
#include <locale.h>
using namespace std;
int main(){
    setlocale(LC_ALL, "Portuguese");
    float base, altura, area;
    cout << "Programa Calcular Área do Triângulo Retângulo"<<endl;
    cout << "Informe a base: ";
    cin >> base;
    cout << "Informe a altura: ";
    cin >> altura;

    area = base * altura / 2;

    cout << "Área: " << area;

}
