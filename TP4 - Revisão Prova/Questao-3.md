## 3.Dado o código abaixo de análise de busca linear: 
```c
for (int i = 0; i < n; i++) { 
    if (array[i] == valor) { 
    return i; 
    } 
} 
```
**Qual a complexidade de tempo no melhor caso e no pior caso? Explique a diferença.**  
A partir da contagem de operações é possível chegar a expressão:
$5n + 1$. Portanto, eliminando os fatores de baixa ordem e os termos constantes, na notação big-O esse algoritmo estaria classificado como O(n).
