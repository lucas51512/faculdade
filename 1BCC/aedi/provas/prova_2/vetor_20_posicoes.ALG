//Vinte posições, vetor novo;

VAR vVal[20]: vetor de inteiros, vNovo[20]: vetor de reais, 
maiorEle: reais, menorEle: reais;

INICIO
    leia(vVal[0]);
    maiorEle <- vVal[0];
    menorEle <- vVal[0];

    para(i: inteiro <- 0, i < 20, i <- i + 1) {

        se(vVal[i] > maiorEle)
        maiorEle <- vVal[i];

        se(vVal[i] < menorEle)
        menorEle <- vVal[i];

        se((vVal[i] % 2) == 0)
        vNovo[i] <- (vVal[i] * menorEle);

        se((vVal[i] % 2) == 1)
        vNovo[i] <- (vVal[i] / maiorEle);

        leia(vVal[i]);
    }

    para(i <- 0, i < 20, i <- i + 1) 
        imprima(vNovo[i]);


FIM.