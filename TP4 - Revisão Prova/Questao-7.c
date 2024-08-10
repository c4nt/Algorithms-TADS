/*Complete o código para calcular a soma dos elementos da linha escolhida pelo usuário.*/

#include <stdio.h> 
int main() { 
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
    int linha, soma = 0;
     
    printf("Digite o número da linha (0, 1 ou 2): "); 
    scanf("%d", &linha); 

    soma = matriz[linha][0] + matriz[linha][1] + matriz[linha][2];

    printf("A soma dos elementos da linha %d é: %d\n", linha, soma); 
    return 0; 
} 

