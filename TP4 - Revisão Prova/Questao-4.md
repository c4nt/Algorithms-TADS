## 4. Dado o código abaixo para análise de recursividade: 
```c
int f(int n) { 
    if (n <= 1) { 
        return n; 
    } else { 
        return f(n - 1) + f(n - 2); 
    }
} 
```
**Qual a ordem de crescimento da função de Fibonacci implementada recursivamente? Qual a complexidade de tempo dessa implementação?**

A ordem de crescimento da função de Fibonacci implementada recursivamente é de $o(2^n)$, ou seja, essa função apresenta um crescimento exponencial. Para cada chamada da função duas outras chamadas são geradas, dessa forma sempre teremos o valor de $n$ mutiplicando a quantidade de chamadas. 


