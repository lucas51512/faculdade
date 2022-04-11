#include <iostream>
#include <iomanip>
#include <math.h>
#include <conio.h>

using namespace std;

int main(){

    int coluna = 5, linha = 4, A[coluna][linha], transposta[linha][coluna];

    for(int i = 0; i < coluna; i++) {
        for(int j = 0; j < linha; j++){
            cout << "Informe a matriz A[" << i <<"][" << j << "]:" << endl;
            cin >> A[i][j];
            transposta[j][i] = A[i][j];
        }
    }

    for(int i = 0; i < coluna; i++){
        for(int j = 0; j < linha; j++){
            cout << setw(4) << A[i][j];
        }
        cout << endl;
    }

    cout << endl << endl << endl;

   for(int i = 0; i < coluna; i++){
        for(int j = 0; j < linha; j++){
            cout << setw(4) << transposta[i][j];
        }
        cout << endl;
        if(i == 4)
            break;
    }

}
