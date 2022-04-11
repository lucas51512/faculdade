// "Conversão Celsius x Fahrenheit";

VAR
 fahr, cel: real;

INICIO
   ESCREVA("Informe a temperatura em Fahrenheit");
   LEIA(fahr);
   
   cel <- (fahr - 32) * (5 / 9);
   
   ESCREVA("A temperatura em centígrados é ", cel);

FIM.