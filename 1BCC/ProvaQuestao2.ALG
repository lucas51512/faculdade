// Sistema de controle de doentes;

CONST cidades: inteiro <- 4, idades: inteiro <- 5  //Definição de constantes;
VAR  doentes[cidades][idades]: matriz de inteiros, totalDoentesCidade: inteiros <- 0;  //Definição de variáveis;

INICIO  //inicio do algorítmo;
    
    escreva("Informe nesta ordem o número de doentes de idosos, adultos, jovens, crianças e bebês"); // Garante a ordem dos dados;

    para(i: inteiro <- 0, i < cidades, i <- i + 1){
        para(j: inteiro <- 0, j < idades, j <- j + 1){
            leia(doentes[i][j]); // leitura da quantidade de doentes por cidade;
            
            totalDoentesCidade <- totalDoentesCidade + doentes[i][j]; // soma total de doentes por cidade;
        
            // Teste de Faixa etária e impressão na tela.

            se(j == 0){
                escreva("A cidade " + i + "contém " + doentes[i][j] + " Idosos doentes");
            }
            se(j == 1){
                escreva("A cidade " + i + "contém " + doentes[i][j] + " Adultos doentes");
            }
            se(j == 2){
                escreva("A cidade " + i + "contém " + doentes[i][j] + " Jovens doentes");
            }
            se(j == 3){
                escreva("A cidade " + i + "contém " + doentes[i][j] + " Crianças doentes");
            }
            se(j == 4){
                escreva("A cidade " + i + "contém " + doentes[i][j] + " Bebês doentes");
            }
        }

        // Total de doentes na cidade impresso na tela;
        escreva("A cidade " + i + "contém " + totalDoentesCidade + "doentes");
    }


FIM.    //Fim do algorítmo;