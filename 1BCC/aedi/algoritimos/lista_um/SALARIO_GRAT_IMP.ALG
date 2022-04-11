// "Gratificação menos imposto";

VAR
   sal_inicial, per_imp, per_grat: inteiro;
   grat, imp, sal_final: real;

INICIO
   ESCREVA("Informe o salario inicial");
   LEIA(sal_inicial);
   ESCREVA("Informe a porcentagem de gratificação");
   LEIA(per_grat);
   ESCREVA("Informe a porcentagem do imposto");
   LEIA(per_imp);
   
   grat <- per_grat * sal_inicial / 100;
   
   imp <- per_imp * sal_inicial / 100;
   
   sal_final <- sal_inicial + grat - imp;
   
   ESCREVA("O salário final é ", sal_final);
   
FIM.