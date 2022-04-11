// "Salario mensal final de um vendedor";
VAR
    sal_fixo, per_vendas, total_vendas, sal_liquido, comissao: real;

INICIO
   ESCREVA("Informe o salário fixo");
   LEIA(sal_fixo);
   ESCREVA("Informe o percentual de vendas");
   LEIA(per_vendas);
   ESCREVA("Informe o total de vendas");
   LEIA(total_vendas);
   
   comissao <- (total_vendas * per_vendas) / 100;
   
   sal_liquido <- sal_fixo + comissao;

   ESCREVA("O salario liquido é ", sal_liquido);

FIM.