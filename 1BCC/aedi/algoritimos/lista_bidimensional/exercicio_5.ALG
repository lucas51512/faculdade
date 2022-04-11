// EXERCÍCIO 5; LISTA BIDIMENSIONAL;

VAR parque[4][4]: matriz de inteiros, soma: reais <- 0, menor200: inteiro <- 0, parqueMenor200: inteiro <- 0, especieMais50 <- 0;

INICIO
para(i: inteiro <- 0, i < 4, i <- i + 1;){
    para(j: inteiro <- 0, j < 4, j <- j + 1){
        leia(parque[i][j]);
        se(parque[i][j] > 50){
            especieMais50 <- j;
            imprima('Existem mais de 50 árvores da espécie' + especieMais50 + 'com um número de ' + parque[i][j] + árvores);
        }

        soma <- soma + parque;
    }
        se(soma < 200){
            menor200 <- menor200 + 1;
            parqueMenor200 <- i;
            imprima('O parque' + parqueMenor200 + 'tem menos de 200 árvores');
        }
        
}

imprima('A quantidade de parques com menos de 200 árvores é de ' + menor200);

FIM.