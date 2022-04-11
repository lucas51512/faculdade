//QUESTÃO 3;

CONST meses: inteiro <- 12, cidades: inteiro <- 4, departamentos : inteiro <- 5;
VAR mVendas[cidades][departamentos][meses]: matriz de reais, vendas_departamento_anual: real <- 0, vendas_cidade_anual: real <- 0, 
menor_vendas: inteiro <- 1000000000, menor_vendas_cidade: inteiro <- 0, vendas__departamento_gerais_anual: reaal <- 0, 
venda_departamento_mensal: real <- 0, quantidade_menores_meses <- inteiros <- 0, menores_meses[quantidade_menores_meses]: vetor de inteiros; 

INICIO
    para(i: inteiro <- 0, i < cidades, i <- i + 1){
        para(j: inteiro <- 0, j < departamentos, j <- j + 1){
            para(k: inteiro <- 0, k <- meses, k <- k + 1){
                leia(mVendas[i][j][k]);
                vendas_departamento_anual <- vendas_departamento_anual + mVendas[i][j][k];
                venda_departamento_mensal <- mVendas[i][j][k];
                se(venda_departamento_mensal < 20000){
                    quantidade_menores_meses <- quantidade_menores_meses + 1;
                    para(l:inteiro <- 0, l < quantidade_menores_meses, l <- l + 1){
                        menores_meses[l] <- meses + 1;
                    }
                }
             
            }

            escreva("Os menores meses do departamento foram");
            para(l <- 0, l < quantidade_menores_meses, l <- l + 1){
                menores_meses[l];
            }

            vendas__departamento_gerais_anual <- vendas_departamento_gerais_anual + vendas_departamento_anual;
            vendas_departamento_anual < - 0;

            vendas_cidade_anual <- vendas_cidade_anual + vendas_departamento_gerais_anual;
            escreva("A quantidade de vendas nos últimos 12 meses da cidade " + i + "Foi de " + "vendas_cidade_anual");
            se(vendas_cidade_anual < menor_vendas){
                menor_vendas <- vendas_cidade_anual;
                menor_vendas_cidade <- i;
            }
        }
    }

    escreva("A cidade " + menor_vendas_cidade + "foi a que vendeu menos");
FIM.