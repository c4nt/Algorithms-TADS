## 5. Calcule a complexidade, no pior caso, do fragmento de código abaixo:
#### Algoritmos Lista 3: Complexidade de Algoritmo.
#### Listing 2: Código

```c
int i , j , s ;
s = 0 ;
for ( i =1; i < N−1; i ++){
    for ( j =1; j < 2∗N; j ++){
        s = s + 1 ;
    }
}
```

A partir da contagem das operações temos a expressão $18n^2+3n+2$. Portanto, eliminando os
fatores de baixa ordem e os termos constantes, na notação big-O esse algoritmo estaria
classificado como $O(n^2)$.