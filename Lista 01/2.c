/*
Elabore um algoritmo que armazene 30 valores inteiros num vetor; segundo a
seguinte lei de formação: Se o índice do vetor for par, o valor digitado deverá ser
multiplicado por 2, caso contrário por 5. A seguir efetue uma pesquisa binária no
vetor.
*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
    int vetAuxiliar[30] = {9,3,2,6,5
    ,12,23,36,65,54,
    98,68,57,35,37,
    98,656,353,366,154,
    364,3658,3245,3265,235,
    2598,316,348,3487,359};
    int vet[30];

    //Populando o vetor de acordo com a lei de formação
    for(int i = 0; i < 30; i++)
    {
        if (vetAuxiliar[i]%2 == 0) {
            vet[i] = vetAuxiliar[i] * 2;
        }else
        {
            vet[i] = vetAuxiliar[i] * 5;
        }           
    }

    //Organizar o vetor em ordem crescente (Para aplicar a pesquisa binária)
    void quick(int vet[], int esq, int dir){
        
        int pivo = esq, i, ch, j;         
        for(i = esq+1; i <= dir; i++){        
            j = i;                      
            if(vet[j] < vet[pivo]){     
                ch = vet[j];               
                while(j > pivo){           
                    vet[j] = vet[j-1];      
                    j--;                    
                }
                vet[j] = ch;               
                pivo++;                    
            }
        }
        if(pivo-1 >= esq){              
            quick(vet,esq,pivo-1);      
        }
        if(pivo+1 <= dir){              
            quick(vet,pivo+1,dir);      
        }
    }
    quick(vet, 0, 29);

    //Executando uma pesquisa binária no vetor vet
    int limiteInferior = 0;
    int limiteSuperior = 30;
    int teste;
    int numeroPesquisado;
    int flag = 0;
    printf("Digite o número que deseja pesquisar: ");
    scanf("%d", &numeroPesquisado);
    while(limiteInferior <= limiteSuperior){
        teste = (limiteInferior + limiteSuperior)/2;
        if (numeroPesquisado == vet[teste]) {
            printf("Número encontrado na posição: %d\n", teste);
            flag = 1;
            break;
        }
        if (numeroPesquisado < vet[teste]) {
            limiteSuperior = teste - 1;
        }
        if (numeroPesquisado > vet[teste]) {
            limiteInferior = teste + 1;
        }
    }

    if (flag == 0) {
        printf("Número não consta no vetor\n");
    }
	
    return 0;
}
