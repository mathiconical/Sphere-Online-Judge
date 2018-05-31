/*
Parte do treinamento de um novo garçom é carregar uma grande bandeja com várias latas de bebidas e copos e entregá-las 
todas numa mesa do restaurante. Durante o treinamento é comum que os garçons deixem cair as bandejas, quebrando todos os copos.

A SBC - Sociedade Brasileira de Copos - analisou estatísticas do treinamento de diversos garçons e descobriu que os garçons 
em treinamento deixam cair apenas bandejas que têm mais latas de bebidas que copos.

Por exemplo, se uma bandeja tiver 10 latas e 4 copos, certamente o garçom em treinamento a deixara cair, quebrando os 4 copos. 
Já se a bandeja tiver 5 latas e 6 copos, ele conseguirá entregá-la sem deixar cair

* Tarefa
Escreva um programa que, dado o número de latas e copos em cada bandeja que o garçom tentou entregar, 
imprime o total de copos que ele quebrou.

* Entrada
A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 100) representando o número de bandejas que o garçom tentou entregar. 
As N linhas seguintes representam as N bandejas. Cada linha contém dois inteiros L e C, indicando o número de latas e o número 
de copos naquela bandeja, respectivamente (0 ≤ L, C ≤ 100).

* Saída
Seu programa deve imprimir uma única linha, contendo um único inteiro, indicando o número total de copos que o garçom quebrou.
/*

#include <iostream>
using namespace std;

int main(void){
	
  int lista, latas, copos, sum=0;
	
  cin >> lista; // lista de bandejas entregues na noite
	
  if(lista >=1 and lista <=100) // verifica a quantidade de bandejas
		for(;lista>=1;lista--)
		{
	        cin >> latas >> copos;  // entrada de latas e copos
		        if(copos < latas) // latas maior que copos
		        	sum += copos; // soma copos quebrados
		}
	cout << sum; // fim do loop, saida do total de copos quebrados
 
	return 0;
}
 