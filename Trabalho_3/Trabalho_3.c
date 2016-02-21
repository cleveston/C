// Terceiro Trabalho 
//  ELC1022
//
// Alunos: Iury Cleveston

#include <stdio.h>
#include <stdlib.h>

main(){
    
    // A linha de comando a seguir declara uma matriz 5x4 (de nome mat) e ja alimenta os valores dessa matriz.    
    int mat[5][4] = {{3,1,2,4},{5,5,8,6},{8,10,11,5},{9,1,5,7},{2,3,8,8}};
    int mat2[4][5];
    // As variaveis declaradas a seguir vocês irao utilizar durante o exercicio. Se precisar, pode declarar mias variaveis
    int i, j, e = 0;
    int soma, somamatriz, somavetor, aux = 0;
    int vet[5] = {0};

    // Tarefa 1: 
    // Utilizando estrutura de repeticao, preencha a terceira coluna da matriz mat com valor zero;
    
    for(i=0;i < 5; i++){
       mat[i][2] = 0;
    }   
    
    // Tarefa 2:
    // Utilizando estrutura de repeticao, troque a segunda linha da matriz mat com a quinta linha
    
    for(i=0;i < 4; i++){
       int m[0][4];
       m[0][i] = mat[4][i]; 
            
       mat[4][i] = mat[1][i];
       mat[1][i] = m[0][i];
    }   

    // Tarefa 3:
    // Utilizando estrutura de repeticao, escreva a matriz mat
    
    for(j = 0; j < 5;j++){
        for(i = 0; i< 4;i++){
             printf("%d ", mat[j][i]);   
        }   
        printf("\n");
    }
    printf("\n");    
    
    // Tarefa 4: 
    // Utilizando estrutura de repeticao, calcule a soma dos elementos da quarta linha da matriz mat; 
    // Armazene esse valor na variavel soma e, ao final da repeticao, imprima o valor de soma

    for(i=0;i < 4; i++){
       e = e + mat[3][i];
    } 
    printf("Soma: %d\n", e);
    printf("\n"); 
        
    // Tarefa 5:
    // Utilizando estrutura de repeticao, armazene a soma dos quadrados dos elementos de cada linha de mat no vetor vet.
    
    for(i=0;i < 5; i++){
           for(j = 0; j< 4;j++){
                 vet[i] = vet[i] + mat[i][j] * mat[i][j];
           }
    } 
 
    // Tarefa 6:
    // Utilizando estrutura de repeticao, escreva o vetor vet
    
    for(i = 0; i < 5;i++){
          printf("%d ", vet[i]);      
    }
    printf("\n");    

    // Tarefa 7:
    // Utilizando estrutura de repeticao, some todos os elementos de mat. Armazene esse valor na variavel somamatriz. 
    // Ao final da repeticao, imprima o valor de somamatriz.
    
    somamatriz = 0;
    for(j = 0; j < 5;j++){
        for(i = 0; i < 4;i++){
             somamatriz = somamatriz + mat[j][i];   
        }   
    }
    printf("\n");
    printf("Soma: %d\n", somamatriz);
    printf("\n");
    
    // Tarefa 8:
    // Se você girasse a matriz Mat em sentido horario, ela se tornaria uma matriz de tamanho 4x5.
    // Utilizando estrutura de repetição, preencha a matriz mat2 com os dados da matriz mat, girada em sentido horário

    for(j = 0; j < 5;j++){
        for(i = 0; i < 4;i++){
             mat2[i][j] = mat[j][i];   
        }      
    }
   
    for(j = 0; j < 4;j++){
        for(i = 0; i < 5; i++){
             printf("%d ", mat2[j][i]);   
        }   
        printf("\n");
    }
    printf("\n");  

    system("pause");
}
