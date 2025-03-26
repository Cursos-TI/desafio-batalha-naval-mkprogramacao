#include <stdio.h>
 
int main(){

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro[10][10] = {0};

    printf("  TABULEIRO BATALHA NAVAL  \n\n");

    printf("   "); // espaço para alinhar os numeros
    for (int j = 0; j < 10; j++){
        printf("%c ", linha[j]); // exibe as letras das colunas
    }
    printf("\n");  // \n para deixar o tebuleiro certo

    for (int j = 2; j < 5; j++){  // adicionando o navio na hirisontal
        tabuleiro[6][j] = 3;
    }

    for (int i = 0; i < 3; i++){  // adicionando o navio na vertical
        tabuleiro[i][0] = 3;
    }
    
    for (int i = 2; i < 5; i++){ // adicionando navio na diagonal esquerda para direita
        tabuleiro[i][5 + i] = 3;
        
    }
    
    for (int i = 3; i < 6; i++){  // adicionando navio na diagonal direita para esquerda
        tabuleiro[5 - i][i] = 3;
    }
    
    for (int i = 2; i < 5; i++){  // adocionando o cone
        for (int j = 1 - (i - 3); j < 4 + (i - 3); j++){
            tabuleiro[i][j] = 5;
        }
        
    }
    
    for (int i = 5; i < 10; i++){  // adicionando a cruz
        tabuleiro[7][i] = 5;
        tabuleiro[i][7] = 5;
    }
    
    
    int linhaInicial = 7; // adicionando o octaedro
    int colunaInicial = 1; 

    tabuleiro[linhaInicial][colunaInicial + 2] = 5; // alinhado o octaedro no tabuleiro
    tabuleiro[linhaInicial + 1][colunaInicial + 1] = 5;
    tabuleiro[linhaInicial + 1][colunaInicial + 2] = 5;
    tabuleiro[linhaInicial + 1][colunaInicial + 3] = 5;
    tabuleiro[linhaInicial + 2][colunaInicial + 2] = 5;
  
   for (int i = 0; i < 10; i++){
        printf("%2d ", numeros[i]); // exibe os numeros das linhas
        for (int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]); // exibe o tabuleiro
        }
        printf("\n"); // \n para deixar o tabuleiro certo
    }
    

    return 0;
}