#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    int linhas = 4, colunas = 6, times[colunas][linhas], time_mais_gols = 0, total_gols_time = 0,
    total_gols_fase = 0, media_gols_fase[colunas][linhas], soma_gols_pares = 0;

    for(int i = 0; i < colunas; i++){
        for(int j = 0; j < linhas; j++){
            cout << "Informe a quantidade de gols: " << times[i][j] << endl;
            total_gols_fase = total_gols_fase + times[j][i];
            total_gols_time = total_gols_time + times[i][j];

            if((times[i][j] % 2) == 0)
              soma_gols_pares = soma_gols_pares + 1;

        }

            media_gols_fase[j][i] = (total_gols_fase/colunas);
            cout << endl << "O time " << i << " fez" << total_gols_time;

            if(total_gols_time > time_mais_gols)
                time_mais_gols = total_gols_fase;

    }

    cout << "O time com mais gols fez: " << time_mais_gols << endl;
    cout << "O total de gols pares foi " << soma_gols_pares << endl;

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++)
            cout << "A média de gols por fase foi" << setw(4) << media_gols_fase[i][j];

    }

}
