#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
int main(){
    int coluna = 3, linha = 6, A[coluna][linha], i = 0, j = 0;
    float media = 0, soma[linha];

    for(int i = 0; i < linha; i++){
        soma[i] = 0;
        media = 0.0;
        for(int j = 0; j < coluna; j++){
            cout << "Informe o valor da matriz A[ "<< j << " ][ "<< i << "] : " << endl;
            cin >> A[j][i];

            media = (media + A[j][i]);
        }
        media = (media / coluna);
        soma[i] = media;

    }

    for(int i = 0; i < linha; i++)
    cout << soma[i] << endl;
}
