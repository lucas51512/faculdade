#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    cout << fixed << setprecision(2);
    cout << "Programa para o c�lculo de sequ�ncia de n�meros\n";

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

    cout << "Informe o n�mero: ";
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
        cout << "Informe o n�mero: ";
        cin >> num;
    }

    mediaImp = (somaImpar/numImp);
    perNumMenor300 = (numMenor300 * 100) / totalNum;
    mediaMaior25 = (float) (somaMaior25/numMaior25);

    cout << "A soma de todos os n�meros pares � de: " << somaPar << endl;
    cout << "A m�dia dos n�meros impares � de: " << mediaImp << endl;
    cout << "A porcentagem dos n�meros menores que 300 � de: " << perNumMenor300 << endl;
    cout << "A m�dia de todos os n�emros maiores que 25 � de: " << mediaMaior25 << endl;

}
