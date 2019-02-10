#include <stdio.h>

int main(){
    int ordem;
    while(scanf("%d", &ordem) != EOF){
        int matriz[ordem][ordem];
        for(int i = 0; i < ordem; i++){
            for(int j = 0; j < ordem; j++){
                if(i==j){
                    matriz[i][j] = 1;
                }else{
                    matriz[i][j] = 3;
                }
                if(i + j == ordem - 1){
                    matriz[i][j] = 2;
                }
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }

    }
    return 0;
}
