#include <iostream>
#include <iomanip>
#include <clocale>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    cout << fixed << setprecision(2);
    cout << "Algor�tmo de c�lculo de todas as tabuadas 1 - 10\n\n";

    int num, mult, result;

    mult = 1;

    while(mult <= 10) {
        num = 1;
            while(num <= 10) {
                result = num * mult;
                cout << num << " X " << mult << " = " << result << endl;
                num = num + 1;

            }
            cout << endl;
            mult = mult + 1;
    }
}
