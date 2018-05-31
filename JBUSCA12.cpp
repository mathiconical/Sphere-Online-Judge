/*
João fez uma pesquisa em seu site de busca predileto, e encontrou a resposta que estava procurando no terceiro link listado. 
Além disso, ele viu, pelo site, que t pessoas já haviam clicado neste link antes. João havia lido anteriormente, também na Internet,
que o número de pessoas que clicam no segundo link listado é o dobro de número de pessoas que clicam no terceiro link listado. 
Nessa leitura, ele também descobriu que o número de pessoas que clicam no segundo link é a metade do número de pessoas
que clicam no primeiro link. João está intrigado para saber quantas pessoas clicaram no primeiro link da busca, e, 
como você é amigo dele, quer sua ajuda nesta tarefa.

* Entrada
Cada caso de teste possui apenas um número, t, que representa o número de pessoas que clicaram no terceiro link da busca.

* Saída
Para cada caso de teste imprima apenas uma linha, contendo apenas um inteiro, indicando quantas pessoas clicaram no primeiro link,
nessa busca.

* Restrições
1 ≤ t ≤ 1000
*/

// Pense no enunciado e não no código.
// Vamos olhar pelo lado matemático
// Temos S1, S2 e S3.
// Com a pesquisa de Joao, temos que,
// S2 é duas vezes o S3 (S2 = 2 * S3)
// Mas logo depois ele nos da a outra
// definição de S2, que é metade de S1.
// Logo, substituindo na equação acima,
// teremos: S1/2 = 2*S3. Mas já temos o
// valor de S3, então isolamos S1.
// S1 = 2*S3*2
// Note que o 2 passa multiplicando.
// Entao, S1 = 4*S3

#include <iostream>
using namespace std;

int main(void){

	int t;

  cin >> t;
	
  if(t >= 1 and t <= 1000) 
    cout << t*4;
	
  return 0;
}
