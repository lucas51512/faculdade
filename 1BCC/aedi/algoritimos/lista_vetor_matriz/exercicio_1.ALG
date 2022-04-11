// Exercício matriz A[3x6];

VAR A[][]: matriz de inteiros, soma[]:vetor de inteiros, coluna: inteiro <- 3, linha: inteiro <- 6, media: real <- 0;

INICIO
    para(i: inteiro <- 0, i < linha, i <- i + 1){
        soma[i] <- 0;
        media <- 0;
        para(j: inteiro <- 0, j < coluna, j <- j + 1 ){;
            leia(A[j][i]);
           
            media <- (media + A[j][i]);
            
        }
        media <- (media /coluna);
        soma[i] <- media;

    }

    para(i <- 0, i < linha, i <- i + 1)
        imprima(soma[i]);

FIM.