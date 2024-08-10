#include <stdio.h>

void busca(int vetor[], int v, int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(v == vetor[i])
        {
            printf("O valor %d encontra-se na posicao %d desse vetor", v, i);
            break;
        }
    }
}

int main(int argc, char const *argv[])
{
    int v = 56;
    int vetor[100] = {
        73, 25, 5, 61, 96, 56, 35, 9, 46, 83, 
        94, 12, 44, 70, 2, 38, 24, 89, 90, 47, 
        13, 59, 87, 26, 54, 65, 88, 52, 7, 66, 
        6, 30, 62, 71, 41, 57, 97, 34, 92, 39, 
        60, 1, 11, 37, 20, 29, 55, 31, 40, 22, 
        95, 17, 15, 64, 42, 63, 84, 58, 19, 91, 
        53, 8, 68, 21, 4, 48, 75, 67, 80, 28, 
        3, 78, 76, 93, 98, 99, 33, 85, 74, 14, 
        10, 18, 32, 27, 49, 77, 45, 50, 86, 79, 
        51, 16, 72, 23, 69, 36, 43, 81, 20, 82
    };

    busca(vetor, v, 100);
    
    
    return 0;
}

/*A partir da contagem das operações temos a expressão 3n + 4. Portanto, eliminando os fatores
de baixa ordem e os termos constantes, na notação big-O esse algoritmo estaria classificado
como O(n).*/
