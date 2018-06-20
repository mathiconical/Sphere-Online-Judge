PAR - Par ou ímpar

Muitas crianças gostam de decidir todas as disputas através do famoso jogo de Par ou Ímpar. 
Nesse jogo, um dos participantes escolhe Par e o outro Ímpar. Após a escolha, os dois jogadores mostram, 
simultaneamente, uma certa quantidade de dedos de uma das mãos. Se a soma dos dedos das mãos dos dois jogadores for par, 
vence o jogador que escolheu Par inicialmente, caso contrário vence o que escolheu Ímpar.

Tarefa
Dada uma seqüência de informações sobre partidas de Par ou Ímpar (nomes dos jogadores e números que os jogadores escolheram),
você deve escrever um programa para indicar o vencedor de cada uma das partidas.

Entrada
A entrada é composta de vários conjuntos de testes. A primeira linha de um conjunto de testes contém um inteiro N, 
que indica o número de partidas de Par ou Ímpar que aconteceram. As duas linhas seguintes contêm cada uma um nome de jogador. 
Um nome de jogador é uma cadeia de no mínimo um e no máximo dez letras (maiúsculas e minúsculas), sem espaços em branco.
As N linhas seguintes contêm cada uma dois inteiros A e B que representam o número de dedos que cada jogador
mostrou em cada partida (0 <= A <= 5 e 0 <= B <= 5). Em todas as partidas, o primeiro jogador sempre escolhe Par. 
O final da entrada é indicado por N = 0.

#include <cstring>                                                                                                                  
// uso padrao de E/S
#include <iostream>
using namespace std;
int main(void){

    // j1 = jogada 1
    // j2 = jogada 2
    int partidas, j1, j2, teste=0;
    
    string nomes[2];

    while(true){ // main loop
        cin >> partidas;

        if(partidas==0) // se num partidas for 0
            break; // saia do programa
     
        teste++; // incremento de casos de testes
        
        cin >> nomes[0] >> nomes[1]; // entrada nome 1 e nome 2
        
        cout << "Teste " << teste << '\n'; // saida caso de teste n
        
        for(int i=0;i<partidas;i++){
            cin >> j1 >> j2; // entrada jogada 1 e jogada 2
            if((j1+j2)%2==0) // se a soma for par
                cout << nomes[0] << '\n'; // imprime jogador par
 
            else // caso for impar
                cout << nomes[1] << '\n'; // imprime jogador impar
        }
        cout << '\n';
    }
    return 0;
}
