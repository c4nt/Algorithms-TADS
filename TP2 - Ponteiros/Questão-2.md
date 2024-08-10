## 2. Dado o programa a seguir:

#### Listing 2: Código
```c
int main ( ) {
    int a = 10 , b = 20 , c = 30;
    int ∗ p o n t ei r o ;
    p o n t ei r o = &b ;
    ∗ p o n t ei r o = −5;
    p o n t ei r o = &c ;
    ∗ p o n t ei r o = 5 0;
    p o n t ei r o = &a ;
    p r i n t f ( "a , b , c , ∗ p=%d,%d,%d,%d\n" , a , b , c , ∗ p o n t ei r o ) ;
return 0 ;
}
```
Determine o que o programa escreve na saída padrão. Explique, usando desenho da
memória, como você chegou a essa conclusão.

|Operação| Variável| Valor|
|-|-|-|
|a = 10| a | 10|
|b = 20| b |20|
|c = 30| c |30|
|p o n t ei r o = &b| *ponteiro| 20 (aponta para b)|
|∗ p o n t ei r o = −5| b |-5 (aponta para b)|
|p o n t ei r o = &c |*ponteiro |30 (aponta para c)|
|∗ p o n t ei r o = 50 |c | 50 (aponta para c) |
|p o n t ei r o = &a  | *ponteiro | 10 (aponta para a) |
|Saída: a , b , c , ∗ p= 10, -5, 50, 10|

