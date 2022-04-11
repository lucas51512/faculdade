//Vingadores;

CONST  k <- 5;

VAR idadeInicial: inteiro, vNomeHerois[k]: vetor de texto, vIdadeHerois[k]: vetor de inteiros, vPesoHerois[k]: vetor de reais, somaIdadeHerois25_50: inteiro = 0
totalHeroisQuaseMeiaIdade: inteiro, qHeroisPor3: inteiro, perHeroisPor3: inteiro, heroiMaisPesado: reais, heroiMaisLeve: reais, pesoInicial: reais, mediaPesoTotal: reais, 
somaPesoTotal: inteiro <- 0, vNomeHeroisQuaseMeiaIdade[k]: vetor de texto, nomeHeroiMaisLeve <- texto, nomeHeroiMaisPesado <- texto;

INICIO

    leia(idadeInicial);
    leia(pesoInicial);
        
    Se(idadeInicial > 999) {
        heroiMaisLeve <- pesoInicial;
        heroiMaisPesado <- pesoInicial;

        para(j:inteiro <- 0, j < i, j <- j + 1) {
            se(vIdadeHerois[j] > 999)
                leia(vNomeHerois[j]);
                leia(vPesoHerois[j]);
                
                
                    se(vPesoHerois[j] < heroiMaisLeve) 
                        heroiMaisLeve <- vPesoHerois[i];
                        nomeHeroiMaisLeve <- vNomeHerois[j]

                    se(vPesoHerois[j] > heroiMaisPesado){
                        heroiMaisPesado <- vPesoHerois[j];
                        nomeHeroiMaisPesado <- vNomeHerois[j];
                    }

                    se(vIdadeHerois[j] > 25 e vIdadeHerois[j]< 50)
                    somaIdadeHerois25_50 <- somaIdadeHerois25_50 + vIdadeHerois[j];

                    se(vIdadeHerois[j] > 40)
                        se(vPesoHerois > 60  e vPesoHerois < 90){
                            totalHeroisQuaseMeiaIdade <- totalHeroisQuaseMeiaIdade + 1;
                            vNomeHeroisQuaseMeiaIdade[j] <- vNomeHerois[j];
                        }

                    se((vIdadeHerois[j] % 3) == 0){
                        qHeroisPor3 <- qHeroisPor3 + 1;
                        perHeroisPor3 <- (qHeroisPor3 * 100) / k;
                    }
                
                    leia(vIdadeHerois[j]);
                }

                leia(idadeInicial);
        }


    imoprima("Os nomes dos herois com idade maior que 40 e peso entre 60kg e 90 kg são:")
    para(i <- 0, i < k, i <- i + 1){
        somaPesoTotal <- somaPesoTotal + vPesoHerois[i];
        imprima(vNomeHeroisQuaseMeiaIdade[i]);
    }
    mediaPesoTotal <- (somaPesoTotal / k);

    imprima("A média de peso de todos os herois foi de " + mediaPesoTotal);
    imprima("A soma de todos os herois com idade entre 25 e 50 anos foi " + somaIdadeHerois25_50);
    imprima("O total de herois com idade maior que 40 anos e peso entre 60kg e 90kg foi " + totalHeroisQuaseMeiaIdade);
    imprima("O heroi mais leve foi " + nomeHeroiMaisLeve + " e seu peso foi " + heroiMaisLeve);
    imprima("O heroi mais pesado foi " + nomeHeroiMaisPesado + " e seu peso foi " heroiMaisPesado);
    imprima("A porcentage de herois com a idade divisível por 3 foi de " + perHeroisPor3);

FIM.