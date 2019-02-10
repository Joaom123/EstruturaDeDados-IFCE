/*
Elabore um algoritmo que armazene 30 valores inteiros num vetor; segundo a
seguinte lei de formação: Se o índice do vetor for par, o valor digitado deverá ser
multiplicado por 2, caso contrário por 5. A seguir efetue uma pesquisa binária no
vetor.
*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int vetAuxiliar[30] = {49,78,82,47,12,31,88,87,77,14,99,22,11,35,80,38,34,66,38,8,15,46,57,44,70,64,19,83,36,48};
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

    //Pesquisa binária no vetor ver[]
    
    
	
    return 0;
}
