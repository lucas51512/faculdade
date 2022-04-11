//ALG COM DUPLA EXERCICIO 19, C
VAR 
	CONT, DEN, NUM, N:inteiro;
	SOMA: real;

INICIO
	LEIA(N);
	NUM <- 480;
	DEN <- 10;
	IMPRIMA(NUM);
	CONT <- 1;
		ENQUANTO (CONT < N) {
			SE (NUM > 0) ENTÃO {
				NUM + (NUM - 5) * -1;
			} SE NAO {
				NUM + (NUM + 5) * -1;
			}
			DEN <- DEN + 1;
			IMPRIMA(NUM, / DEN);
			SOMA <- SOMA + NUM/DEN;
			CONT < - CONT + 1;
		}

FIM.