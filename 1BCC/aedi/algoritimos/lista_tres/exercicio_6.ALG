//Soma dos 25 primeiros termos;

VAR soma, num, den, elev, conta: reais;

INICIO 
    leia(num);

    elev <- 25;
    den <- 1;
    conta <- ((num ^ elev) / den);
    soma <- 0;

    enquanto(den <= 25) {
        soma <- soma + conta;
        conta * -1;
        den = den + 1;
        elev = elev -1;

    }

imprima(soma);

FIM.