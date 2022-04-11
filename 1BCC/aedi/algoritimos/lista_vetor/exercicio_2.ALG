// vetor c <- a + b;

VAR vetA[i]: vetor[i] inteiro, vetB[i]: vetor[i] inteiro, vetC[i]: vetor[i];
num: inteiro;

INICIO
    i <- 0;

    escreva("Informe os valores A");

    enquanto(i < 20) {
        LEIA(num);
        vetA[i] <- num;
        i <- i + 1
    }

    i <- 0;

    escreva(Informe os valores B);

    enquanto(i < 20) {
        LEIA(num);
        vetB[i] <- num;
        i <- i + 1;
    }

    i <- 0;

    enquanto(i < 20) {
        LEIA(num);
        vetC[i] <- vetA[i] + vetB[i];
        i <- i + 1;
    }

    i <- 0;

    escreva("Os valores C são:");

    enquanto(i < 20) {
        escreva(vetC[i]);
        i <- i + 1;
    }

FIM.
    