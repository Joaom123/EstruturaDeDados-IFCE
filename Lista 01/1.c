/*
Suponha que existam 02 vetores A e B do tipo inteiro com 25 elementos inteiros
cada. Elabore um algoritmo que construa um vetor C a partir da junção de A e B. A
seguir efetue uma pesquisa sequencial no vetor no vetor C.
*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int vetA[25] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int vetB[25] = {111,211,31,41,51,61,71,181,92,150,151,152,153,164,165,166,167,168,269,620,261,221,231,241,251};
    int vetC[50];

    //Popular o vetor C com os vetores A e B
    for(int i = 0; i < 50; i++)
    {
        if (i<25) {
            vetC[i] = vetA[i];
        }else
        {
            vetC[i] = vetB[i-25];
        }    
    }

    //Pesquisa sequencial do vetor C
    for(int i = 0; i < 50; i++)
    {
        printf("[%d] ", vetC[i]); 
    }
    return 0;
}




