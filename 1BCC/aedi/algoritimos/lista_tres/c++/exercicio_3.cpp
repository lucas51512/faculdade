#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    cout << fixed << setprecision(2);
    cout << "Programa para o cálculo de sequência de números\n";

    int num, totalNum=0, somaPar=0, numImp, numMenor300, numMaior25, somaImpar, totalPar, somaMaior25;
    float mediaImp, perNumMenor300, mediaMaior25;

    numImp = 0;
    mediaImp = 0;
    perNumMenor300 = 0;
    numMaior25 = 0;
    numMenor300 = 0;
    totalPar = 0;
    somaImpar = 0;
    somaMaior25 = 0;

    cout << "Informe o número: ";
    cin >> num;

    while(num != 0) {
        totalNum++;

        if((num % 2) == 0)
            somaPar = somaPar + num;


        if((num % 2) == 1){
            numImp++;
            somaImpar = somaImpar + num;
    }

        if(num < 300)
            numMenor300++;

        if(num > 25) {
            somaMaior25 = somaMaior25 + num;
            numMaior25++;
        }
        cout << "Informe o número: ";
        cin >> num;
    }

    mediaImp = (somaImpar/numImp);
    perNumMenor300 = (numMenor300 * 100) / totalNum;
    mediaMaior25 = (float) (somaMaior25/numMaior25);

    cout << "A soma de todos os números pares é de: " << somaPar << endl;
    cout << "A média dos números impares é de: " << mediaImp << endl;
    cout << "A porcentagem dos números menores que 300 é de: " << perNumMenor300 << endl;
    cout << "A média de todos os núemros maiores que 25 é de: " << mediaMaior25 << endl;

}
