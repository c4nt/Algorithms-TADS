/*Complete o código para contar a quantidade de elementos positivos na matriz.*/
#include <stdio.h> 
int main() { 
    int matriz[3][3] = {{1, -2, 3}, {-4, 5, -6}, {7, 8, 9}}; 
    int cont = 0; 
    int i,j;
    for(i =0; i < 3; i++)
        {
            for(j = 0; j < 3; j++)
            {
                if(matriz[i][j] > 0)
                {
                    cont++;
                }
            }
        }

    printf("A quantidade de elementos positivos é: %d\n", cont); 
    return 0; 
}


