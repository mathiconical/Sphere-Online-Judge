/*
Dado um inteiro N, determine quanto vale N2.

* Entrada
A entrada é composta por um único caso de teste, composto por uma única linha que contém o inteiro N.

* Saída
Seu programa deve produzir uma única linha, contendo o valor de N2.

* Restrições
    |N| ≤ 10000
*/
#include <math.h>
#include <iostream>
using namespace std;
int main(void){
        int num; // definindo variavel
        cin >> num; // entrada usuario

        if(num > 0 and num <= 10000) // condicao de aplicacao 
                cout << pow(num, 2); // saida caso esteja de acordo

        return 0;
}
