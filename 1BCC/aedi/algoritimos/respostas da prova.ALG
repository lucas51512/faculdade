//valor e nome hotifruti;

VAR numero_produtos: inteiro <- 3, percentual_aumento: inteiro <- 10, vHorti[numero_produtos]: vetor de texto,
 vPreco[numero_produtos]: vetor de reais, nome_menor_horti: texto, preco_menor_horti: inteiro <- 99999999999,
 novo_preco[numero_produtos]: vetor de reais, horti_menor_dez: real <- 0, per_horti_menor_dez: inteiro <- 0;

INICIO

    para(i: inteiro <- 0, i < numero_produtos, i <- i + 1){
        leia(vHorti[i]);
        leia(vPreco[i]);
        se(vPreco[i] < preco_menor_horti){
            preco_menor_horti <- vPreco[i];
            nome_menor_horti <- vHorti[i]
        }
        novo_preco[i] <- (vPreco[i]*percentual_aumento)/100 + vPreco[i];

        se(vPreco[i] < 10){
            horti_menor_dez <- horti_menor_dez + 1;
        }

    }

    per_horti_menor_dez <- (100*horti_menor_dez)/numero_produtos;

    imprima(nome_menor_horti, preco_menor_horti);
    para(i: inteiro <- 0, i < numero_produtos, i <- i + 1){
        imprima(vHorti[i], novo_preco[i], pula_linha);
    }

FIM.