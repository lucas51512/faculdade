//Algorítmo lucro esperado;

VAR despesa, ingressos, lucro, total, preco_ing, q_ingressos,
 preco_ing_max, q_ingressos_max, lucro_max: inteiro;

INICIO
 
    despesa <- 600;
    q_ingressos <- 120;
    preco_ing <- 15;
    preco_ing_max <- 0;
    q_ingressos_max <- 0;
    lucro_max <- 0;

    enquanto(preco_ing >= 3){
        total <- q_ingressos * preco_ing;
        lucro <- q_ingressos - despesa;
        
        se(lucro > lucro_max){
            lucro_max <- lucro;
            preco_ing_max <- preco_ing;
            q_ingressos_max < - q_ingressos
        }
    
    imprima(q_ingressos, preco_ing, preco_ing_max);
    lucro;
    preco_ing <- preco_ing - 3;
    q_ingressos <- q_ingressos + (q_ingressos * 30 / 100);

    }

    imprima(lucro_max, q_ingressos_max, preco_ing_max);
    FIM.