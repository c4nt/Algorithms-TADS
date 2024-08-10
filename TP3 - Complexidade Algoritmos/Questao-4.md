## 4. Calcule a complexidade, no pior caso, do fragmento de código abaixo:

#### Listing 1: Código
``` c
int i , j , k , s ;
for ( i =0; i < N−1; i ++){
    for ( j= i +1; j < N; j ++){
        for ( k=1; k < j ; k++){
            s = 1 ;
        }
    }
}
```

A partir da contagem das operações temos a expressão $2+3n+3n^2+n^3$. Portanto, eliminando
os fatores de baixa ordem e os termos constantes, na notação big-O esse algoritmo estaria
classificado como $O(n^3)$.