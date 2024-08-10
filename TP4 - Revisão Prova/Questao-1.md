## 1. Dado o código abaixo: 
```c
for (int i = 0; i < n; i++) { 
// Uma operação constante 
} 
```
**Qual a complexidade de tempo deste código em relação a n? Explique sua resposta.**   
A partir da contagem de operações é possível chegar a expressão:
$3n + 1$
Portanto, eliminando os fatores de baixa ordem e os termos constantes, na notação big-O esse algoritmo estaria classificado como $O(n)$.
