//Controle de Temperatura de uma Estufa;

VAR t1: inteiro, t2:inteiro, a:inteiro, r:inteiro;

INICIO

leia(t1);
leia(t2);

se((t1 e t2) = 0) {
    a <- 1;
    r <- 0;

} se nao se((t1 e t2) = 1){
    a = 0;
    r = 1;
}

se((t1 = 1) e (t2 = 0)) {
    a = 0;
    r = 0;
} se não se((t1 = 0) e (t2 = 1)) {
    a = nulo;
    r = nulo;
}