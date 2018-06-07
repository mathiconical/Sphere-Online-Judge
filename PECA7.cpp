/*
Joãozinho adora quebra-cabeças, essa é sua brincadeira favorita. O grande problema, porém, é que às vezes o jogo vem com uma peça faltando. Isso irrita bastante o pobre menino, que tem de descobrir qual peça está faltando e solicitar uma peça de reposição ao fabricante do jogo. Sabendo que o quebra-cabeças tem N peças, numeradas de 1 a N e que exatamente uma está faltando, ajude Joãozinho a saber qual peça ele tem de pedir.
Tarefa
Escreva um programa que, dado um inteiro N e N - 1 inteiros numerados de 1 a N, descubra qual inteiro está faltando.

* Entrada
A entrada contém um único conjunto de testes, que deve ser lido do dispositivo de entrada padrão (normalmente o teclado). A entrada contém 2 linhas. A primeira linha contém um inteiro N (2 ≤ N ≤ 1.000). A segunda linha contém N - 1 inteiros numerados de 1 a N (sem repetições).

* Saída
Seu programa deve imprimir, na saída padrão, uma única linha, contendo o número que está faltando na sequência dada.
*/

// pensei em solicitar um numero
// o computador ira somar do 1
// ate o numero digitado.
// exemplo o 5, a soma vai ser:
// 1+2+3+4+5 = 15.
// nisso, o usuario so podera 
// digitar 4, ou seja, o numero
// faltando na soma sera exibido
// no final!

#include <iostream>
using namespace std;

int main(void){ 

        int pecas, i=0, total1, total2, ent; // definindo variaveis

        // parte 1

        cin >> pecas; // entrada do total de pecas

        for(i=0;i<=pecas;i++) // loop para gerar a quantidade de pecas
                total1 += pecas-i; // Caso o numero for 5, total1 = 1+2+3+4+5 = 15

        // parte 2

        for(i=1;i<pecas;i++){ // loop para entrada de pecas 
                cin >> ent; // entrada de pecas 
                total2 += ent; // Caso o numero for 5, total2 = 1+2+3+4 = 10
        }

        cout << total1-total2; // saida da peca que falta, total1 - total2, 15-10 

        return 0;
}
