## 4. Escreva uma função que receba como parâmetro dois ponteiros para inteiros a e b e realize uma troca de valores.
#### O conteúdo do endereço apontado por a deve ir para o endereço apontado por b e o conteúdo do endereço apontado por b deve ir para o endereço apontado por a.

``` c
#include <stdio.h>

int main()
{
    int a = 10; b = 20;

    void swp(int *a, int * b)
    {
        int c = *b;
        *b = *a;
        *a = c;
        printf("VAlor de ponteiro *a = %d\n Valor de ponteiro *b = $d", a, b);
    }

    swp(a&,b&);
}


```