Algorítimo LEqto_14_par_impar

VAR 
	X, QUOC, RESTO: inteiro;
	

INICIO
	
	LEIA X;
	QUOC X <- X/2;
	RESTO <- X - 2 * QUOC;
	SE (RESTO = 0) {
		IMPRIMA("O NÚMERO É PAR");
	} SE NÃO {
		IMPRIMA("O NÚMERO É IMPAR");
	}
