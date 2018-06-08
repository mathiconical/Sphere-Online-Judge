/*
Leonardo é um garoto muito criativo. Ele adora criar desa?os para seus colegas da escola. 
Seu último desafio é o seguinte: diversos números são ditos em voz alta, 
quando o número 0 (zero) é dito então o desafio termina e seus colegas devem dizer imediatamente qual foi o maior número. 
Leonardo tem muita dificuldade de verificar se a resposta dada pelos colegas é correta ou não, 
pois a sequência de números costuma ser longa. Por este motivo, ele resolveu pedir sua ajuda.

* Tarefa
Sua tarefa é escrever um programa que dada uma sequência de números inteiros positivos terminada por 0 (zero), 
imprime o maior número da sequência.

* Entrada
A entrada é dada em uma única linha contendo uma sequência de números inteiros positivos. O último número da linha é 0 (zero).

* Saída
Seu programa deve imprimir o maior número dentre os números da entrada.

* Restrições
    1 ≤ tamanho da sequência ≤ 100
    1 ≤ número da sequência ≤ 100
*/

#include <iostream>
using namespace std;
int main(void){
    int entrada, maior=0; // definindo variaveis
    
    while(true){ // main loop
        cin >> entrada; // entrada usuario
    
        if(entrada>=maior) // verifica se entrada e maior que var maior
            maior = entrada; // maior passa a receber entrada   

        if(entrada==0) // se entrada for 0
            break; // saida do loop
    }

    cout << maior; // imprime o maior valor    
    return 0;
}
