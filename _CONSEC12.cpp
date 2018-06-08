/*
Num sorteio que distribui prêmios, um participante inicialmente sorteia um inteiro N e depois N valores. 
O número de pontos do participante é o tamanho da maior sequência de valores consecutivos iguais. 
Por exemplo, suponhamos que um participante sorteia N = 11 e, nesta ordem, os valores

30, 30, 30, 30, 40, 40, 40, 40, 40, 30, 30

Então, o participante ganha 5 pontos, correspondentes aos 5 valores 40 consecutivos. 
Note que o participante sorteou 6 valores iguais a 30, mas nem todos são consecutivos.

Sua tarefa é ajudar a organização do evento, escrevendo um programa que determina o número de pontos de um participante.

* Entrada
A primeira linha da entrada contém um inteiro N, o número de valores sorteados. 
A segunda linha contém N valores, V1, V2, . . . , VN, na ordem de sorteio, separados por um espaço em branco.

* Saída
Seu programa deve imprimir apenas uma linha, contendo apenas um inteiro, indicando o número de pontos do participante.

* Restrições
    1 ≤ N ≤ 104
    -231 ≤ VI ≤ 231-1, para I = 1, 2, . . . , N
*/


#include <iostream>
using namespace std;

int main(void){

    int entrada, contador=1, qnt=0; // definindo variaveis
        
    cin >> entrada; // entrada usuario
    
    int vetor[entrada]; // vetor tamanho da entrada
    
    for(int i=0;i<entrada;i++) // loop do vetor
        cin >> vetor[i]; // entrada de dados
        
    for(int i=1,k=0;i<entrada,k<(entrada-1);i++,k++){ // loop para permutar entre elementos do vetor
        if(vetor[k]==vetor[i]){ // comparando elementos do mesmo vetor
            contador++; // caso iguais contador ++
            if(contador>=qnt) // caso contador for maior que quantidade
                qnt = contador; // quantidade recebe contador
        }
        else // caso contrario
            contador = 1; // contador recebe 1 e comeca novamente
        }
    cout << qnt; // saida da quantidade maxima
    return 0;
}
