/*
Ler duas matrizes A e B, de duas dimensões, sendo a matriz A de 5X4 (5 linhas e 4 colunas)
e a matriz B de 4X3 (quatro linhas e três colunas). Apresentar a matriz C como resultado da
multiplicação das matrizes A e B. Condição para multiplicação: o número de colunas de A
tem que ser igual ao número de linhas de B.
*/

#include<stdio.h>
#include<stdlib.h>

#define MATRIZ_A_LINHAS 5
#define MATRIZ_A_COLUNAS 4
#define MATRIZ_B_LINHAS 4
#define MATRIZ_B_COLUNAS 3

int main(int argc, char const *argv[])
{
    int matrizA[5][4] = { 
        {1,0,0,0},
        {1,6,7,8},
        {1,2,3,4},
        {1,2,3,4},
        {1,6,7,8}
    };
    int matrizB[4][3]= {
        {1,2,3},
        {0,6,7},
        {0,2,3},
        {0,6,7}
    };
    int matrizC[5][3];


    //Verifica se é possível
    if (MATRIZ_A_COLUNAS == MATRIZ_B_LINHAS) {
        int linha = 0;
        int coluna = 0;
        int aux;
        int i;
        //Multiplica as matrizes matrizA x matrizB

        for( linha = 0; linha < MATRIZ_A_LINHAS; linha++)
        {
            for( coluna = 0; coluna < MATRIZ_B_COLUNAS; coluna++)
            {
                aux = 0;
                for( i = 0; i < MATRIZ_B_LINHAS; i++)
                {
                    aux += matrizA[linha][i] * matrizB[i][coluna];
                    matrizC[linha][coluna] = aux;
                }
            }
            
        }
       
       
        //Imprimir a matrizC
        for(linha=0; linha<MATRIZ_A_LINHAS; linha++){ 
            for(coluna=0; coluna<MATRIZ_B_COLUNAS; coluna++) 
            printf("%d ", matrizC[linha][coluna]); 
            printf("\n"); 
         }
        
    }

    return 0;
}
