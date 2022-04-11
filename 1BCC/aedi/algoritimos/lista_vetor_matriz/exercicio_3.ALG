// Matriz transposta de A;

VAR coluna: inteiro <- 5; linha: inteiro <- 4; A[coluna][linha]: matriz de inteiros, transposta[linha][coluna];

INICIO
        para(i: inteiro <- 0; i < coluna; i <- i + 1) {
            para(j: inteiro <- 0, j < linha, j <- j + 1){
                leia(A[i][j]);
                transposta[j][i] <- A[i][j];
            }
        }

        i <- 0;
        j <- 0;

        enquanto(i < coluna){
            enquanto(j < linha){
                imprima(A[i][j]);
                j  <- j + 1;
            }
            i <- i + 1; 
        }

        i <- 0;
        j <- 0;
        
        enquanto(i < coluna){
            enquanto(j < linha){
                imprima(transposta[j][i]);
                j <- j + 1;
            }
            i <- i + 1;
        }
    
FIM.