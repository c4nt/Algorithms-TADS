/*Complete o código para multiplicar as duas matrizes e imprimir o resultado. */
#include <stdio.h> 
int main() { 
    int matriz1[2][2] = {{1, 2}, {3, 4}}; 
    int matriz2[2][2] = {{5, 6}, {7, 8}}; 
    int resultado[2][2]; 
    int i, j;
    
        for(i = 0; i < 2; i++)
        {
            for(j = 0; j < 2; j++)
            {
                resultado[i][j] = matriz1[i][j] * matriz2[j][i];
                printf("%d\n", resultado[i][j]);


            }
        }

    return 0; 
} 


