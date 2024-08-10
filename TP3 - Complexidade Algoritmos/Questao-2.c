#include <stdio.h>

void ordenado(int vetor[4])
{   
    int i; // --------------------------------> 1
    for(i = 0; i < 4; i++) //--> 3n + 1
    {
        if(vetor[i] < vetor[i + 1]) //--------> 2(n - 1)
        {
            printf("ORDENADO"); //------------> 1(n - 1)
            break;
        }
    }
}

int main(int argc, char const *argv[])
{
    int vet_ord[4] = {1,2,3,4,5};
    int vet_des[4] = {5,4,3,2,1};

    ordenado(vet_ord);
    
    return 0;
}

/* A partir da contagem das operações temos a expressão 6n -1. Portanto, eliminando os
fatores de baixa ordem e os termos constantes, na notação big-O esse algoritmo estaria
classificado como O(n). */
