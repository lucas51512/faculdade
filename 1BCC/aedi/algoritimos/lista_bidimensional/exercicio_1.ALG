EXERCÍCIO 1; LISTA BIDIMENSIONAL;
CONST totalProdutos: inteiro <- 4, totalCidades: inteiro <- 4;
var pragr[totalProdutos][totalCidades]: matriz de inteiros, somaProdutos: reais <- 0, mediaProdutos: reais <- reais;

INICIO
    para(j: inteiro <- 0, j < 4, j <- j + 1){
        para(i: inteiro <- 0, i < 4, i <- i + 1){
            leia(pragr[i][j]);
            somaProdutos <- somaProdutos + pragr[i][j];
        }
        mediaProdutos <- (somaProdutos/totalProdutos);
        Imprima('A média de produtos ' + i + ' é de ' + mediaProdutos);
    }
FIM.