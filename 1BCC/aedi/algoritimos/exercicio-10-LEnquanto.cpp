#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int cont;
    float imp, grat, tSal, tImp, sal, salFinal;

    cout << "Programa para calcular o salario de 50 funcionarios";
    cont = 0;

    while(cont < 0) {
        cout << "Informe o salário do funcionário: ";
        cin >> sal;

        grat = (sal * 16) / 100;
        imp = (sal * 30) / 100;

        tImp = tImp + imp;
        tSal = tSal + sal;

        salFinal = sal + grat - imp;

        cout << "O salario final é: " <<  salFinal;
         
    }

    cout << "O salario total pago é: " << tSal;
    cout << "O imposto total é: " tImp;
}