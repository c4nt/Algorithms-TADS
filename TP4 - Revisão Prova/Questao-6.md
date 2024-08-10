## 6. Considerando o código abaixo: 
```c
void troca(int *x, int *y) { 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 
int main() { 
    int a = 10, b = 20; 
    troca(&a, &b); 
    printf("a = %d, b = %d\n", a, b); 
    return 0; 
} 
```
**Descreva com detalhes o que está sendo realizado pelo código no uso de ponteiros e referências.**  
Na função troca, na primeira linha, o valor da variável que **x* está referenciando é passado para a variável *temp*, em seguida o valor da variável que **y* está referenciando é passado para o ponteiro **x*, finalizando com a passagem do valor da variável *temp* para o ponteiro **y*.
```   
linha 1: *x = 10 , temp  = 10  
linha 2: *x = 20, *y = 20  
linha 3: *y = 10, temp = 10  
Saída: a = 20, b = 10  
```
