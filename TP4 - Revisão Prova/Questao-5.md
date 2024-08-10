## 5. Dado o código abaixo sobre ponteiros: 
```c
int numeros[5] = {10, 20, 30, 40, 50}; 
int *ptr = numeros; 
// Qual será o valor impresso? 
printf("%d\n", *(ptr+2)); 
```
Quando o vetor *numeros* é passado para o ponteiro **ptr*, esse ponteiro passa a referenciar o primeiro valor do vetor *numeros[0]*. Portanto o comando **(ptr+2)* vai acessar o valor na posição 2 desse vetor imprimindo o valor 30.