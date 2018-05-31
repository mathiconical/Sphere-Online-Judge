/*
O cometa Halley é um dos cometas de menor período do Sistema Solar, completando uma volta em torno do Sol a cada 76 anos; 
na última ocasião em que ele tornou-se visível do planeta Terra, em 1986, várias agências espaciais enviaram sondas para coletar 
amostras de sua cauda e assim confirmar teorias sobre suas composições químicas.

* Tarefa
Escreva um programa que, dado o ano atual, determina qual o próximo ano em que o cometa Halley 
será visível novamente do planeta Terra. Se o ano atual é um ano de passagem do cometa, considere 
que o cometa já passou nesse ano (ou seja, considere sempre o próximo ano de passagem, não considerando o ano atual).

* Entrada
A única linha da entrada contém um único inteiro A (2010 ≤ A ≤ 104), indicando o ano atual.

* Saída
Seu programa deve imprimir uma única linha, contendo um número inteiro, indicando o próximo ano 
em que o cometa Halley será visível novamente do planeta Terra.
*/

#include <iostream>
using namespace std;
 
int main(void){
 
// cometa_data = 1986;
// periodo = 76 anos
// achar a primeira data que passou
// 1986 mod 76, isso é igual a 10.
// Halley passou pela 1ª vezno ano 10.
// Agora, usar a entrada de um ano,
// e dizer a proxima data que ele passará.
// Usar mod 76 no ano para obter o valor
// aproximado de 10. Enquanto ano mod 76
// for diferente de 10, acrescente 1 ano
// no ano digitado e faça mod novamente.
// Quando chegar no ano mod 76 igual a 10
// mostre o ano.


  int ano;
	cin >> ano;
 
	if(ano%76 == 10){ // Ano digitado mod 76 igual a zero
		cout << ano+76; // some 76 no ano e imprima-o
}
	while(ano%76 < 10 or ano%76 > 10){
		ano++;  // acrescenta 1 em ano 
		if(ano%76 == 10){ // se ANO mod 76 for igual a 10
			cout << ano;  // imprima o ano
			break; // saia do loop
	}
}
 
 
	return 0; }
