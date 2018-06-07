/*
Ana e suas amigas estão fazendo um trabalho de geometria para o colégio, em que precisam formar vários triângulos, 
numa cartolina, com algumas varetas de comprimentos diferentes. 
Logo elas perceberam que não dá para formar triângulos com três varetas de comprimentos quaisquer. 
Se uma das varetas for muito grande em relação às outras duas, não dá para formar o triângulo. 
Ana fez uma pesquisa na internet e aprendeu que com três varetas é possível formar um triângulo quando, para todas as varetas, 
vale a seguinte relação: o comprimento da vareta é menor do que a soma dos comprimentos das outras duas varetas. 
Por exemplo, se os comprimentos forem 6, 9 e 5, vai dar para formar o triângulo, 
pois a relação vale para as três varetas: 6 < 9 + 5, 9 < 6 + 5 e 5 < 6 + 9. 
Mas, se os comprimentos forem, por exemplo, 4, 10 e 3, não vai dar para formar um triângulo, 
porque a relação não vale para uma das varetas (pois 10 não é menor do que 3 + 4).

Neste problema, você precisa ajudar Ana e suas amigas a descobrir se, dados os comprimentos de quatro varetas, 
é ou não é possível selecionar três varetas, dentre as quatro, e formar um triângulo!

* Entrada
A entrada é composta por apenas uma linha contendo quatro números inteiros.

* Saída
Seu programa deve produzir apenas uma linha contendo o caractere ‘S’, caso seja possível formar o triângulo; 
ou o caractere ‘N’, caso não seja possível formar o triângulo.

* Restrições
• O valor dos quatro números está entre 1 e 100. 
*/

// criar uma variavel bool para armazenar valor verdadeiro ou falso
// caso uma das operações forem verdades, forma um triangulo, caso 
// contrario, se todas forem falsas, não é possivel formar um 
// triangulo.


#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void){

	int v1, v2, v3, v4; // definindo variaveis
  bool f1=false, f2=false, f3=false, f4=false; // possibilidades

	cin >> v1 >> v2 >> v3 >> v4; // entrada de valores

	f1 = (abs(v2-v3) < v1 and v1 < (v2+v3) or abs(v1-v3) < v2 and v2 < (v1+v3) or
		    abs(v1-v2) < v3 and v3 < (v1+v2)); // compara valores 1, 2 e 3

  f2 = (abs(v4-v3) < v2 and v2 < (v4+v3) or abs(v2-v4) < v3 and v3 < (v2+v4) or
        abs(v2-v3) < v4 and v4 < (v3+v2)); // compara valores 2, 3 e 4

  f3 = (abs(v4-v3) < v1 and v1 < (v4+v3) or abs(v1-v4) < v3 and v3 < (v1+v4) or
        abs(v1-v3) < v4 and v4 < (v1+v3)); // compara valores 1, 3 e 4

  f4 = (abs(v2-v4) < v1 and v1 < (v2+v4) or abs(v1-v4) < v2 and v2 < (v1+v4) or
        abs(v1-v2) < v4 and v4 < (v1+v2)); // compara valores 1, 2 e 4

	if(f1 or f2 or f3 or f4 == true) // se algum assumir true
		cout << "S"; // saida da resposta positiva
	else // caso contrario
		cout << "N"; // saida da resposta negativa

	return 0;
}
