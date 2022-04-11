//ALgoritmo notas alunos;

VAR i: inteiro <- 30, vNotas[i]: vetor de inteiros, 
vAlunos[i]: vetor de texto, maiorNota: inteiro = 0, nomeAlunoMaiorNota ;

INICIO

enquanto(i < 30) {
    leia(vNotas[i]);
    leia(vAlunos[i]);
    maiorNota <- vNotas[i];

    se(i != 0)
    se(vNotas[i] > vNotas[i - 1]) {
        maiorNota <- vNotas[i];
        nomeAlunoMaiorNota <- vAlunos[i];

    }

    imprima(maiorNota, nomeAlunoMaiorNota);
}

FIM.