#include <stdio.h>

void inserir_numero(int vetor[100], int numero)
{
    int i, j;

    for(i = 0; i < 100; i++)
    {
        if(vetor[i] > numero)
        {
            break;
        }
    }

    for(j = 100; j > i; j--)
    {
        vetor[j] = vetor[j - 1];
    }

    vetor[i] = numero;
}

int main(int argc, char const *argv[])
{
    int i;
    int vetor[100] = {1,2,3,5,6};

    inserir_numero(vetor, 4);

    for (i = 0; i < 6; i++)
    {
        printf("%d",vetor[i]);
    }
    
    return 0;
}

/*A partir da contagem das operações temos a expressão 10n + 1. Portanto, eliminando os
fatores de baixa ordem e os termos constantes, na notação big-O esse algoritmo estaria
classificado como O(n).*/
