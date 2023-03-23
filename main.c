#include <stdio.h>

int main()
{
    float matrix [4][4];
    
    int i, j, cont;
    float somapar, somaimpar;
    float media;
    somaimpar = 0;
    somapar = 0;
    cont=0;

    for (i=0;i<4;i++)
    {
        for (j=0; j<4;j++)
        {
            printf("\n Digite um número:");
            scanf("%f",&matrix[i][j]);
        }
    }
    
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4;j++){
        if (j %2 == 0){
            somapar=somapar + matrix[i][j];
            cont = cont + 1 ;
        }
        else {
            somaimpar = somaimpar + matrix[i][j];
        }
        }
        
        }
    media = somaimpar/cont;
    printf("\n A soma dos valores das colunas impares e %f", somaimpar);
    printf("\n A media dos valores das colunas pares e %f", media);
    return 0;
}