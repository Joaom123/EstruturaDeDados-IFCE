#include<stdio.h>

int main(int argc, char const *argv[])
{
    int numeroDeTestes;
    int indice;
    int aux;
    unsigned long long int fiboNumeros[61];
    fiboNumeros[0] = 0;
    fiboNumeros[1] = 1;
    for(aux = 2; aux < 61; aux++){
            fiboNumeros[aux] = fiboNumeros[aux-1] + fiboNumeros[aux-2];
        }
    
    scanf("%d", &numeroDeTestes);
    while(numeroDeTestes > 0){
        scanf("%d", &indice);
        printf("Fib(%d) = %llu\n", indice, fiboNumeros[indice]);
        numeroDeTestes--;
    }
    return 0;
}


