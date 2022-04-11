//Algorítimo de leitura de tempo de atleta e atribuição de pontuação.

VAR 
	TEMPO, PONTOS: inteiro;
	NOME: texto[30];
	
INICIO
	PONTOS <- 0;
	LEIA(NOME);
	LEIA (TEMPO);
	
	SE(TEMPO < 10){
		PONTOS <- 100;
		
	}SE NAO SE (TEMPO >=10 & TEMPO <=13){
		PONTOS <- 70;
	}SE NAO SE (TEMPO > 13) {
		PONTOS <- 40;
	}
	
	IMPRIMA("O ATLETA", NOME, "FEZ UM TEMPO DE ", PONTOS);
	
FIM.