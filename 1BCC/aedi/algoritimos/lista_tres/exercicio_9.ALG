//Quantidade bois - Media bois;

VAR q_bois, peso, boi_gordo, boi_magro, cont: inteiros;
id_bois, id_boi_magro, id_boi_gordo :texto;
media_peso_bois, total_peso :reais;

INICIO
    cont <- 0;
    q_bois <- 0;
    peso <- 0;
    id_bois <- '';
    id_boi_gordo <- '';
    id_boi_magro <- '';

    leia(q_bois);
    leia(peso);
    boi_gordo <- peso;
    boi_magro <- peso;

        enquanto(cont < q_bois){
            
            leia(id_bois);
            leia(peso);
            
            total_peso <- total_peso + peso;

            se(peso > boi_gordo){
                boi_gordo <- peso;
                id_boi_gordo <- id_bois;
            }
            se(peso < boi_magro){
                boi_magro <- peso;
                id_boi_magro <- id_bois;
            }
            q_bois <- q_bois + 1;
        
        }

    media_peso_bois <- (total_peso/q_bois);

    imprima("O boi mais gordo é: " + id_boi_gordo + " e seu peso é: " + peso);
    imprima("O boi mais magro é: " + id_boi_magro + " e seu peso é: " + peso);
    imprima("A média de peso de todos os bois é: " + media_peso_bois);

FIM.