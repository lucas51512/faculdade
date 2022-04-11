//Controle de bombeamento de água;

VAR h: inteiro, l: inteiro, bo: inteiro, al: inteiro;

se(h = 0) {
    bo <- 1;
    
} se nao{
    bo <- 0;
}

se(l = 0) {
    al <- 1;

} se nao{
 al <- 0;

}

se(h = 1 e l = 0){
    al <- nulo;
    bo <- nulo;
}

imprima(bo, al);