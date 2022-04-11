//Ler  100 numeros inteiros e armazenar em um vetor;

VAR vNumerosInt100[100]: vetor de inteiros, vNumerosInt20[20]: vetor de numeros inteiros;

INICIO

    para(i: inteiro <- 0, i < 100, i <- i + 1)
        leia(vNumerosInt100[i]);

    para(j: inteiro <- 0, j < 20, j <- j + 1)
        leia(vNumerosInt20[j]);

    para(i <- 0, i < 100, i <- i + 1) {
        imprima('vNumerosInt100[', i, '] : ', vNumerosInt100[i])
        
        enquanto(i < 20) 
            imprima('vNumerosInt20[', i, '] : ', vNumerosInt20[i])
    
    }

    para(i <- 0, i < 20, i <- i + 1){
        para(j <- 0, j < 100, j <- j + 1){
            se(vNumerosInt100[j] == vNumerosInt20[i])
                 imprima('O valor ', vNumerosInt20[i], ' foi encontado na posição', j ' do vetor de 100 numeros e
                na posição ', i ' do vetor de 20 numeros);
        
        }
    }

FIM.