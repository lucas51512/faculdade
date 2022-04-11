// Algorítimo calculo de todas as tabuadas 1 - 10;

VAR num, mult, result: inteiros;

INICIO

    mult <- 1;

    enquanto(mult <= 10) {

    num <- 1;
    
        enquanto(num <= 10) {    
            result <- num * mult;
            imprima(num + ' X ' + mult + ' = ' + result);
            num <- num + 1;
        
        }
        
        pula_linha;
        mult <- mult + 1;
    }

FIM.