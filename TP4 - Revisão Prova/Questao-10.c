/*Complete o código para calcular e imprimir a matriz transposta. */
#include <stdio.h> 
int main() { 
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
    int transposta[3][3]; 
    int i, j;


        printf("Matriz transposta:\n");
        for(i = 0; i < 3; i++)
        {
            for(j = 0; j < 3; j++)
            {
                printf("%d\t", matriz[j][i]);
            }
            printf("\n");
        }


        printf("\nMatriz original:\n");
        for(i = 0; i < 3; i++)
        {
            for(j = 0; j < 3; j++)
            {
                printf("%d\t", matriz[i][j]);
            }
            printf("\n");
        }


    
    return 0; 
} 

