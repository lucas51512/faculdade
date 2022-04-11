//Algoritmo "Quantidade Combustível";

	VAR
		TEMP, DISTANCIA, VELOCIDADE: inteiro

		LITROS_USADOS: real

INICIO
	ESCREVA("Informe o Tempo");
	LEIA (TEMP);
	ESCREVA("Informe a Velocidade");
	LEIA(VELOCIDADE);

	DISTANCIA <- TEMP * VELOCIDADE;

	LITROS_USADOS <- DISTANCIA / 12;

	ESCREVA ("Tempo gasto na viagem", TEMP);
   	ESCREVA ("Distância percorrida", DISTANCIA);
   	ESCREVA ("Velocidade Média", VELOCIDADE);
   	ESCREVA ("Litros usados", LITROS_USADOS);

FIM.