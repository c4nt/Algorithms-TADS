/*Complete o código para ordenar os elementos de uma linha específica da matriz.*/
#include <stdio.h> 
int main() { 
int matriz[3][3] = {{3, 1, 2}, {5, 4, 6}, {9, 7, 8}}; int linha; 
int linha, i, j, tmp;


    printf("Digite o número da linha (0, 1 ou 2): ");
    scanf("%d", &linha);


   


    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(matriz[linha][i] > matriz[linha][i + 1])
            {
                tmp = matriz[linha][i];
                matriz[linha][i] = matriz[linha][i + 1];
                matriz[linha][i + 1] = tmp;
            }
        }
    }


    for(i = 0; i < 3; i++)
    {
       
        printf("%d", matriz[linha][i]);


    }

return 0; 
} 


