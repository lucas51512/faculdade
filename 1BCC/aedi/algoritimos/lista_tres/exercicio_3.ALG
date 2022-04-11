//Calculo sequencia de numeros;

VAR num, totalNum, somaPar, numImp, numMenor300, numMaior25, totalPar, somaImpar, somaMaior25: inteiros;
 
mediaImp, perNumMenor300, mediaMaior25: reais;

INICIO

num <- 0;
totalNum <- 0;
somaPar <- 0;
numImp <- 0;
mediaImp <- 0;
perNumMenor300 <- 0;
numMaior25 <- 0;
mediaMaior25 <- 0;
numMenor300 <- 0;
totalPar <- 0;
somaImpar <- 0;

 leia(num);

    enquanto(num != 0) {
        totalNum <- totalNum + 1;

        se((num % 2) == 0) 
            somaPar <- somaPar + somaPar;

        se((num % 2) == 1) {
            numImp <- numImp + 1;
            somaImpar <- somaImpar + somaImpar;
        }

        se(num < 300) 
            numMenor300 <- numMenor300 + 1;

        se(num > 25) {
            somaMaior25 <- somaMaior25 + num;
            numMaior25 <- numMaior25 + 1;
        }

        leia(num);
    }

mediaImp <- (somaImpar/numImp);
perNumMenor300 <- (numMenor300 * 100) / totalNum;
mediaMaior25 <- (numMaior25/somaMaior25);

imprima(somaPar);
imprima(mediaImp);
imprima(perNumMenor300);
imprima(mediaMaior25);

FIM.