## 3. Considere o trecho de código a seguir:

#### Listing 3: Código
```c
int main ( ) {
    int i = 3 , j = 5 ;
    int ∗p , ∗q ;
    p = &i ;
    q = &j ;
    return 0 ;
}
```
Qual é o valor resultante de cada uma das seguintes expressões?
```
1. p == &i    4. ∗q == &j
2. p == ∗p    5. ∗q == j
3. q == j     6. ∗p − ∗q
```
```
1) p == &i:  
Verdadeiro. Ambos fazem referência ao endereço de memória de i. 
``` 
```
2) p == *p  
Falso. p armazena e retorna o endereço de memória da variável i, enquanto *p retorna o
valor contido nessa mesma variável i. Portanto, não é uma comparação válida.
```
```
3) q == j  
Falso. q retorna o endereço de memória da variável j enquanto j irá retornar seu próprio
valor. Sendo essa uma comparação inválida.
```
```
4) *q == &j  
Falso. *q retorna o valor contido na variável j, enquanto &j retorna o endereço de
memória da variável j.
```
```
5) *q == j  
Verdadeiro. Já que o ponteiro *q e a variável j retornam o mesmo valor.
```
```
6) *p - *q  
O resultado da operação é -2.
```