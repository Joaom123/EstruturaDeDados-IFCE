#include <stdio.h>

#define SUM 'S'
#define AVARAGE 'M'
 
int main(int argc, char const *argv[])
{
    double matriz[12][12];
    int colunaSelecionada;
    char operacaoSelecionada;
    int i,j,valor = 0;
    double valorFinal = 0.0;

    scanf("%d", &colunaSelecionada);
    scanf("%c", &operacaoSelecionada);
    operacaoSelecionada = getchar();


    for(i = 0; i < 12; i++)
    {
        for(j = 0; j < 12; j++)
        {
            scanf("%lf", &matriz[i][j]);
        }
        
    }

    for( i = 0; i < 12; i++)
        {
            valorFinal += matriz[i][colunaSelecionada];
        }

    
    if (operacaoSelecionada == SUM) {
        printf("%.1lf\n", valorFinal);
    }

    if (operacaoSelecionada == AVARAGE) {
        valorFinal = valorFinal/12;
        printf("%.1lf\n", valorFinal);
    }
    
    return 0;
}






