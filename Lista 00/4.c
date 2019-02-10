//Desenvolva um algoritmo que, determine se um determinado número N informado é primo ou não. 
//Se sim, que encontre e informe os dois primos antecessores de N e os dois primos sucessores de N. 
//O algoritmo só encerra quando for informado um número N primo.

#include <stdio.h>
#include <math.h>

//função que retorna se um número é primo
int verificaPrimo(int numeroPrimo){
    int marcadorDePrimo = 1;
    int contador = 2;
    if (numeroPrimo == 2 || numeroPrimo == 3){
        //O número digitado é primo
        printf("O número %d é primo\n", numeroPrimo);
        return marcadorDePrimo;
    }else{
        while(contador <= numeroPrimo/2)
        {
            if(numeroPrimo%contador == 0)
            {
                //o número digitado não é primo
                printf("O número %d não é primo\n", numeroPrimo);
                marcadorDePrimo = 0;
                return marcadorDePrimo;
                break;
            }
            contador++;
        }
        if (marcadorDePrimo == 1){
            printf("O número %d é primo\n", numeroPrimo);
            return marcadorDePrimo;

        }
    }
    
}

//Função que pega os dois próximos números primos
void pegaDoisProximosPrimos(int numeroPrimo){
    int marcador = 0;
    int numeroTeste = numeroPrimo + 1;
    while(1){
        if(verificaPrimo(numeroTeste)){
            printf("%d é primo\n", numeroTeste);
            marcador++;
        }
        numeroTeste++;
        if(marcador == 2){
            printf("Os dois próximos números primos já foram selecionados\n");
            break;
        }
    }
    
}

//Função que pega os dois números primos anteriores
void pegaDoisAnterioresPrimos(int numeroPrimo){
    int marcador = 0;
    int numeroTeste = numeroPrimo - 1;
    while(1){
        if(numeroTeste == 2 && marcador == 0){
            printf("Apenas 2\n");
            break;
        }
        if(numeroTeste == 1 && marcador == 0){
            printf("Não existem números primos anteriores\n");
            break;
        }
        if(verificaPrimo(numeroTeste)){
            printf("%d é primo\n", numeroTeste);
            marcador++;
        }
        numeroTeste--;
        if(marcador == 2){
            printf("Os dois números primos anteriores já foram selecionados\n");
            break;
        }

    }
    
}


int main(int argc, char const *argv[])
{
    int numeroPrimoDigitado;
    printf("Digite um número:\n");
    scanf("%d", &numeroPrimoDigitado);
    verificaPrimo(numeroPrimoDigitado);
    pegaDoisProximosPrimos(numeroPrimoDigitado);
    pegaDoisAnterioresPrimos(numeroPrimoDigitado);

    return 0;
}



