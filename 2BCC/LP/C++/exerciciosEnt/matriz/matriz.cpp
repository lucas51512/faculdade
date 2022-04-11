#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int numeroDeLinhas, numeroDeColunas;
    int contador = 1;


    cout << "Informe o numero de linhas: " << endl;
    cin >> numeroDeLinhas;

    cout << "Informe o numero de colunas" << endl;
    cin >> numeroDeColunas;

    int matriz[numeroDeLinhas][numeroDeColunas];

    for(int i = 0; i < numeroDeLinhas; i++){
            cout << "[  ";
        for(int j = 0; j < numeroDeColunas; j++){
            matriz[i][j] = contador;
            contador++;
            cout << matriz[i][j] << " ";
        }
        cout << " ]";
        cout << endl;
    }


}
