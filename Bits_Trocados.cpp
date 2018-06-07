/*
As Ilhas Weblands formam um reino independente nos mares do Pacífico.
Como é um reino recente, a sociedade é muito influenciada pela informática.
A moeda oficial é o Bit; existem notas de B$ 50,00, B$10,00, B$5,00 e B$1,00.
Você foi contratado(a) para ajudar na programação dos caixas automáticos de um grande banco das Ilhas Weblands.

* Tarefa
Os caixas eletrônicos das Ilhas Weblands operam com todos os tipos de notas disponíveis, 
mantendo um estoque de cédulas para cada valor (B$ 50,00, B$10,00, B$5,00 e B$1,00).
Os clientes do banco utilizam os caixas eletrônicos para efetuar retiradas de um certo número inteiro de Bits.

Sua tarefa é escrever um programa que, dado o valor de Bits desejado pelo cliente, determine o número de cada uma das notas necessário para totalizar esse valor, de modo a minimizar a quantidade de cédulas entregues. Por exemplo, se o cliente deseja retirar B$50,00, basta entregar uma única nota de cinquenta Bits. Se o cliente deseja retirar B$72,00, é necessário entregar uma nota de B$50,00, duas de B$10,00 e duas de B$1,00.

* Entrada
A entrada é composta de vários conjuntos de teste. Cada conjunto de teste é composto por uma única linha, 
que contém um número inteiro positivo V, que indica o valor solicitado pelo cliente. O final da entrada é indicado por V = 0.

* Saída

Para cada conjunto de teste da entrada seu programa deve produzir três linhas na saída. 
A primeira linha deve conter um identificador do conjunto de teste, no formato “Teste n”, onde n é numerado a partir de 1. 
Na segunda linha devem aparecer quatro inteiros I, J, K e L que representam o resultado encontrado pelo seu programa: 
I indica o número de cédulas de B$50,00, J indica o número de cédulas de B$10,00, 
K indica o número de cédulas de B$5,00 e L indica o número de cédulas de B$1,00. 
A terceira linha deve ser deixada em branco. A grafia mostrada no Exemplo de Saída, abaixo, deve ser seguida rigorosamente. 

*/


#include <iostream>
using namespace std;

int main(void){

	/*
                             :D
          	  	  Soldiers of the WEBLANDS
                DragonForce  Sonic FireStorm
	*/

	// definindo variaveis
	// bit_50 = nota de 50
	// bit_20 = nota de 20
	// bit_10 = nota de 10
	// bit_01  = nota de 1

  int bit_50, bit_10, bit_05, bit_01;

	int valor_bit, teste=1;

	while(true){ // main loop

	//	* reinicia os valores das variaveis *

		valor_bit=0, bit_50=0, bit_10=0, bit_05=0, bit_01=0;  // novos valores para caso teste n

		cin >> valor_bit; // entrada do valor para retirada de bits

		if(valor_bit<=0 or valor_bit>10000){ // saida do loop se dados invalidos
			break;
		}

		while(valor_bit>0){ // enquanto o valor nao for completamente sacado

			if(valor_bit/50>0){ // verifica a retirada de 50 bits
				bit_50 = valor_bit/50; // quantas cedulas de 50 bits
				valor_bit -= (bit_50*50); // valor apos a retirada
			}
			else if(valor_bit/10>0){ // verifica a retirada de 10 bits
				bit_10 = valor_bit/10; // quantas cedulas de 10 bits
				valor_bit -= (bit_10*10); // valor apos a retirada
			}
			else if(valor_bit/5>0){ // verifica a retirada de 5 bits
				bit_05 = valor_bit/5; // quantas cedulas de 5 bits
				valor_bit -= (bit_05*5); // valor apos a retirada
			}
			else if(valor_bit/1>0){ // verifica a retirada de 1 bits
				bit_01 = valor_bit/1; // quantas cedulas de 1 bits
				valor_bit -= (bit_01*1); // valor apos a retirada
			}
		}

		// caso de teste 'N';
		cout << "Teste " << teste << "\n";

		// saida caso do total de notas subsequentes;
		cout << bit_50 << " " << bit_10<< " " << bit_05 << " " << bit_01 << "\n\n";

		teste++; // caso de teste ++;

	}

	return 0;
}
