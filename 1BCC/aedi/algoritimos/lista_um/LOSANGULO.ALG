// "Diagonal maior e menor de um losângulo";

VAR
   diagonal_maior, diagonal_menor, area: real;

INICIO
   ESCREVA("Informe a diagonal menor");
   LEIA(diagonal_menor);
   ESCREVA("Informe a diagonal maior");
   LEIA(diagonal_maior);
   
   area <- (diagonal_maior * diagonal_menor) / 2;
   
   ESCREVAL("A área do losangulo é: ", area);

FIM.