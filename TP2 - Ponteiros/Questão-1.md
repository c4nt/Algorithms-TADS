## 1. Dado o programa a seguir:

#### Listing 1: Código
```c
int main ( ) { 
int a = 10 , b = 2 0;  
int ∗pa , ∗pb ;  
pa = &a ;  
pb = &b ;  
∗pa = ∗pb ∗ 2 ;  
p r i n t f ( "%d,%d\n" , a , b ) ;  
return 0 ;  
}
```

Determine o que o programa escreve na saída padrão. Explique, usando desenho da
memória, como você chegou a essa conclusão.

|Variável |Valor |Operação|
|-|-|-|
|a |10 |a = 10|
|b |20 |b = 20|
|*pa| 10 (aponta para a) |pa = &a|
|*pb| 20 (aponta para b) | pb = &b|
|*pa| 40 (aponta para a) |∗pa = ∗pb ∗ 2|

A multiplicação do valor contido na variável "b"
é realizada através do acesso indireto a seu
valor através do ponteiro "*pb", logo depois o
valor é atribuído a variável "a" através do
ponteiro "*pa"