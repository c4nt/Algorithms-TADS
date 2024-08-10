/*Complete o código para calcular a soma dos elementos da diagonal secundária da matriz.*/
#include <stdio.h> 
int main() { 
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
    int soma = 0; 
    int i, j = 2;
    for(i = 0; i < 3; i++)
    {
        soma = soma + matriz[i][j];
        j--;
    }
    printf("A soma dos elementos da diagonal secundária é: %d\n", soma); 
    return 0; 
} 

