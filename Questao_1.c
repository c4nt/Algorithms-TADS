#include <stdio.h>
#include <stdlib.h>


void soma_linha(int mat[4][8])
{  
    int i, j, soma_linha = 0;

    printf("\n\nSoma das Linhas:\n");
    printf("-----------------------------------------------------------------------------------");
    for( i = 0; i < 4; i++)
    {
        for( j = 0; j < 8; j++)
        {
            soma_linha = soma_linha + mat[i][j];
           
        }
        
        if(soma_linha%2 == 0)
        {
            printf("\nA soma dos elementos da linha %d corresponde a um valor PAR igual a = %d",i , soma_linha);
        }
        else
        {
            printf("\nA soma dos elementos da linha %d corresponde a um valor IMPAR igual a = %d",i , soma_linha);

        }
        soma_linha = 0;
    }
    printf("\n-----------------------------------------------------------------------------------");

};


void soma_coluna(int mat[4][8])
{
    int i, j, sum = 0;

    printf("\n\nSoma das Colunas:\n");
    printf("-----------------------------------------------------------------------------------\n");
    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 4; j++)
        {
            sum = sum + mat[j][i];
        }

        if(sum%2 == 0)
        {
            printf("A soma dos elementos da coluna %d corresponde a um valor PAR igual a = %d \t\n",i, sum);
        }
        else
        {
            printf("A soma dos elementos da coluna %d corresponde a um valor IMPAR igual a = %d \t\n",i, sum);
        }
        sum = 0;
    }
    printf("-----------------------------------------------------------------------------------");
};

int main(int argc, char const *argv[])
{
    int MAT[4][8], i, j;

    printf("\n\nMatriz:\n");
    printf("-----------------------------------------------------------------------------------\n");
    for( i = 0; i < 4; i++)
    {
        for( j = 0; j < 8; j++)
        {
            MAT[i][j] = 1 + (rand()%30);

            printf("%d \t", MAT[i][j]);

        }

        printf("\n");
    }
    printf("-----------------------------------------------------------------------------------");


    soma_linha(MAT);
    soma_coluna(MAT);
    
    return 0;
}
