/*
Dado um inteiro N, determine quanto vale N fatorial (escreve-se N!). 
O fatorial de um número é o produto de todos os números entre 1 e N, inclusive. 
Por exemplo, 5! = 5 × 4 × 3 × 2 × 1 = 120.

* Entrada
A entrada é composta por uma única linha que contém o inteiro N.

* Saída
A saída deve consistir de apenas uma linha contendo o valor de N!.

* Restrições
    0 ≤ N ≤ 12
*/

#include <iostream>
using namespace std;

int main(void){

    int numero, saida=1; // definindo variaveis
    
    cin >> numero; // entrada
    
    for(int i=numero;i>1;i--) // loop fatorial
        saida *= i; // acumula o valor
    
    cout << saida; // imprime o valor do fatorial.

    return 0;
}
