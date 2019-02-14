#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ordem;
    int i = 0;
    int j = 0;

    while(scanf("%d", &ordem)){
        if(ordem == 0){
            break;
        }
        for(i=0; i < ordem; i++){
            for (j = 0; j < ordem; j++)
            {
                if (j == 0) {
                    printf("%3d", abs(i-j)+1);
                }else{
                    printf(" %3d", abs(i-j)+1);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}
