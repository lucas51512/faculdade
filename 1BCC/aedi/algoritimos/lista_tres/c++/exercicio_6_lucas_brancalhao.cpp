#include <iostream>
#include <clocale>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");
    cout << fixed << setprecision(2);

    cout << "Programa para a soma dos 25 primeiros termos\n";
    int soma, num, den, elev, conta;

    cout << "Informe o número: ";
    cin >> num;

    elev = 25;
    den = 1;
    conta = ((num ^ elev) / den);
    soma = 0;

        while(den <= 25){
            soma = soma + conta;
            conta * -1;
            den = den + 1;
            elev = elev -1;
        }

    cout << "A soma final é de: " << soma << endl;

}
