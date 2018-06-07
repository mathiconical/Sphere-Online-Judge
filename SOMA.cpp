/*
Dada uma lista de N inteiros, encontre a soma de todos eles.

* Entrada
A entrada é composta de um único caso de teste. A primeira linha contém um inteiro positivo N. 
As N linhas seguintes contêm cada uma um inteiro X, representando os N números a serem somados.

* Saída
Seu programa deve produzir uma única linha na saída, contendo a soma de todos os N inteiros.

* Restrições
    0 ≤ N ≤ 50
    |X| ≤ 5000
*/

#include <iostream>
using namespace std;
int main(void){

  int lista, num, sum=0; // definindo variaveis
	
  cin >> lista; // quantidade de vezes que ira somar
	
  if(lista <= 50 and lista >= 0) // checa as condicoes de operacoes
		for(;lista>0;lista--){ // loop em funcao da lista, para cada soma
	        cin >> num; // entrada de soma
	        //if(num <= 5000 and num >= 0)
          sum += num; // armazenando o valor
    }
      
	cout << sum; // saida da soma

	return 0;
}
