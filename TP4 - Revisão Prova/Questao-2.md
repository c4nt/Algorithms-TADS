## 2. Dado o código abaixo: 
```c
for (int i = 0; i < n; i++) { 
    for (int j = 0; j < n; j++) { 
        // Uma operação constante 
    } 
} 
```
**Qual a complexidade de tempo deste código em relação a n? Por que?**  
A partir da contagem de operações é possível chegar a expressão: $9n^2 + 1$.
Portanto, eliminando os fatores de baixa ordem e os termos constantes, na notação big-O esse algoritmo estaria classificado como $O(n^2)$.
