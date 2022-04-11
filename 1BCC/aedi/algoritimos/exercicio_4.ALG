//imobiliaria do balacobaco;

VAR quantidade_imoveis <- 12 mALUGUEL[quantidade_imoveis][12]: matriz de reais, 
    vIMOVEL[quantidade_imoveis]: vetor de inteiros, vMES[12]: vetor de inteiros, valor_mensal: inteiro <- 0,
    total_mensal[12]: vetor de reais, maior_montante: reais <- 0, mes_maior_montante: inteiro <- 0, total_aluguel: real <- 0
    media_aluguel_por_imovel: real <- 0, soma_diagonal: real <- 0, novo_aluguel[12][12]: matriz de reais <- 0, percentual_aumento: real <- 10;

INICIO
    para(i: inteiro <- 0, i < 12, i <- i + 1){
        leia(vMES[i]);
        para(j: inteir0 <- 0, j < quantidade_imoveis, j <- j + 1){
            leia(vIMOVEL[j]);
            leia(mALUGUEL[i][j]);

            total_aluguel <- total_aluguel + mALUGUEL[i][j];

            se(mALUGUEL[i][j] > maior_montante){
                maior_montante <- mALUGUEL[i][j];
                mes_maior_montante <- vMES[i];
            }
            valor_mensal <- valor_mensal + mALUGUEL[i][j]; 

            se(i = j)
                soma_diagonal <- soma_diagonal + mALUGUEL[i][j];

            se((j % 2) == 1){
                novo_aluguel[i][j] <- (mALUGUEL * percentual_aumento)/100 + mALUGUEL;
            }se nao{
                novo_aluguel[i][j] <- mALUGUEL;
            }
        
        total_mensal[i] <- valor_mensal;

    }

    media_aluguel_por_imovel <- ((total_aluguel/quantidade_imoveis)/12);
    
    imprima(media_aluguel_por_imovel);
    imprima(maior_montante, mes_maior_montante, total_mensal);
    imprima(soma_diagonal);

    para(i: inteiro <- 0, i < 12, i <- i + 1){
        para(j: inteiro <- 0, j < quantidade_imoveis, j <- j + 1){
            imprima(novo_aluguel[i][j]);
        }
    }


FIM.