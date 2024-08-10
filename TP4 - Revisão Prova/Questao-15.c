/*Complete o código para encontrar o maior elemento de cada linha da matriz e imprimir os resultados.
*/
#include <stdio.h> 
int main() { 
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
    int maior = matriz[0][0];
    int i, j;


        for(i = 0; i < 3; i++)
        {
            for(j = 0; j < 3; j++)
            {
                if(matriz[i][j] > maior)
                {
                    maior = matriz[i][j];
                }
            }


            printf("O maior elemento da linha %d é o %d\n", i, maior);
        }
    
    return 0; 
} 

