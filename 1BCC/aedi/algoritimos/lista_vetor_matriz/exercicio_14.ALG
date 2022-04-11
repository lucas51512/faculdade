// FInais da copa;

VAR  linhas:inteiro <- 4, colunas:inteiro <- 6, times[colunas][linhas]: matriz de inteiros, 
    time_mais_gols: inteiro <- 0, total_gols_time: inteiro <- 0, total_gols_fase <- 0, media_gols_fase[colunas][linhas],
    soma_gols_pares: inteiro <- 0;

INICIO
    para(i: inteiro <- 0, i < colunas, i <- i + 1){
        para(j: inteiro <- 0, j < linhas, j <- j + 1){
            leia(times[i][j]);
            total_gols_fase <- total_gols_fase + times[j][i];

            total_gols_time <- total_gols_time + times[i][j]; 
            se((times[i][j] % 2) == 0){
                soma_gols_pares <- soma_gols_pares + 1;
            }
        }

        media_gols_fase[j][i] <- (total_gols_fase/colunas);

        imprima("gols de cada time: " i);

        se(total_gols_time > time_mais_gols){
            time_mais_gols <- total_gols_time;
        }

    }

    imprima(time_mais_gols);
    imprima(soma_gols_pares);

    para(i: inteiro <- 0, i < linhas, i <- i + 1){
        para(j:inteiro <- 0, j < colunas, j <- j+ 1) {
            imprima(media_gols_fase[i][j]);
        }
    }

FIM.