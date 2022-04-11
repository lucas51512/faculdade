//Pulsos telefonicos;

VAR vNome[10]: vetor de texto, vPulso[10]: vetor de inteiros;

INICIO

PARA(var i, i <- 0, i <- i + 1) {
    leia(vNome[i]);

    leia(vPulso[i])

    se(vPulso[i] > 200){
        imprima(vNome[i])
    }

    
    
}