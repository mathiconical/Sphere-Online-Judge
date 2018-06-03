/*

* Tarefa
Dado um inteiro N, verifique se N é primo.

* Entrada
A entrada é composta por um único caso de teste, composto por uma única linha que contém o inteiro N.

* Saída
Seu programa deve produzir uma única linha, contendo a palavra "sim", se N for primo, e "nao", caso contrário (note a ausência de acentuação).

* Restrições
|N| < 231

*/
#include <iostream>
using namespace std;

int main(void){

  int i,k,entrada;

  cin >> entrada;

  for(i=entrada;i>=1;i--){
	  if(entrada%i==0)  k++;

  if(k==2)  cout << "sim";
  else  cout << "nao";
  
return 0;
}
