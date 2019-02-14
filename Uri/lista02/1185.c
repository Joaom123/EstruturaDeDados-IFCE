#include <stdio.h>

#define SUM 'S'
#define AVARAGE 'M'

int main(int argc, char const *argv[])
{
    double matriz[12][12];
    char operacaoSelecionada;
    int i,j,limite = 10;
    double valorFinal = 0.0;

    scanf("%c", &operacaoSelecionada);
    operacaoSelecionada = getchar();


    for(i = 0; i < 12; i++)
    {
        for(j = 0; j < 12; j++)
        {
            scanf("%lf", &matriz[i][j]);
        }
        
    }

    for( i = 0; i < 11; i++)
        {
            for( j = 0; j <= limite; j++)
            {
                valorFinal += matriz[i][j];
            }
            limite--;
            
            
        }
    
    if (operacaoSelecionada == SUM) {
        printf("%.1lf\n", valorFinal);
    }

    if (operacaoSelecionada == AVARAGE) {
        valorFinal = valorFinal/66.0;
        printf("%.1lf\n", valorFinal);
    }
    return 0;
}
