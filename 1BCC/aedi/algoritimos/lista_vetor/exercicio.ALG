Exercício 6 l_4;

VAR vA[t]: VETOR[T] de inteiros, vB[t]:VETOR[T]: de reais, divisor: inteiro, i: inteiro;

INICIO
i <-0
t <= 6; 

enquanto(i < t){
    leia(vA[i]);

    vB <- vA/4
    i <- i + 1;
}

t <- 0;
    enquanto(i < t) {
        vB[i] <- vA[i] / 4;
        i <- i + 1;
    }

t <- 0;
    enquanto(i < t) {
        imprima vB[i];
        i <- i + 1;
    }

