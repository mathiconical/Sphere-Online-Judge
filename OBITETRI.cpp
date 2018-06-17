/* ESTE CODIGO EH FERENTE AO DESAFIO DO SPOJ ( https://br.spoj.com/problems/OBITETRI/ )
 * ESTOU SUBINDO ELE MAS AINDA NÃO ESTÁ PRONTO, PARTE DELE ESTA INACABADA, POIS ACUSA ERRO NO SPOJ.
 */

// lib manipular strings
#include <cstring>
// lib entrada / saida
#include <iostream>

using namespace std;

int main(void){ // Pontuacao jogo Tetris;

    int jogador; // variavel jogador
    int  i, k, teste=1; // variaveis de controle

    while(true){ // main loop

//        cout << "Entre a quantidade de jogadores.\n";    
        cin >> jogador; // quantidade de jogadores

        if(jogador<=0 or jogador > 1000) // se jogador for igual a 0
            break; // sai do programa
        
        string nome[jogador]; // string por 'n' jogadores
        
        char nomes[20]; // variavel para pegar o nome do jogador;
          
        int pontos[jogador]; // array para armazenar pontos por 'n' jogadores

        /* BLOCO DE ENTRADA DE DADOS */
    
        for(i=0;i<jogador;i++){ // loop para nome
//            cout << "Entre com " << i+1 << " nome do jogador.\n";
//            cin >> nome[i]; // entrada do nome em 'i'
            cin >> nomes; // entrada com o nome do jogador de acordo com 'i' no loop for
            if(strlen(nomes)>15) // verifica se nome possui mais de 15 caracteres
                break; // sai do programa caso tenha
                
            int soma=0; // variavel para somar as entradas dos pontos
            int menor=1001; // variavel para pegar o menor numero
            int maior=-1; // variavel para pegar o maior numero
            int ponto; // variavel para solicitar entrada dos pontos

            for(k=0;k<12;k++){ // loop para ponto
//                cout << "Entre com o " << k+1 << " ponto de " << nome[i] << ".\n";
                cin >> ponto; // entrada dos pontos em 'k'
                soma+= ponto; // soma recebe valores de temp em 'k'

                if(maior < ponto){ // verifica se maior < ponto em 'k'
                    maior = ponto; // se sim, maior = ponto em 'k'
//                    cout << "O maior ponto de " << nome[i] << " foi " << maior << ".\n";
                }
                if(menor > ponto){ // verifica se menor > ponto em 'k'
                    menor = ponto; // se sim, menor = ponto em 'k'
//                    cout << "O menor ponto de " << nome[i] << " foi " << menor << ".\n";
                }
            }
            pontos[i] = soma - (maior+menor); // novo valor sem o menor e maior numero
//            cout << "A pontuacao apos menor e maior e de " << pontos[i] << ".\n";
            nome[i] = nomes; // string recebe nome apos verificacao;
        }
    
        /* BLOCO DE COMPARACAO DOS RESULTADOS */
        /*    Nesse bloco usei Bubble Sort    */
        /*    Juntamente com a funcao swap    */

        for(int i=0;i<jogador;i++){ // permuta de i ate jogador
            for(int k=0;k<jogador-1;k++){ // permuta de k ate jogador-1
                if(pontos[k] < pontos[k+1]){ // verifica se pontos de k eh menor que ponto de k+1
                    swap(nome[k], nome[k+1]); // uso da swap para trocar o nome de k+1 para k
                    swap(pontos[k], pontos[k+1]); // uso da swap para trocar o ponto de k+1 para k
                }
                if(pontos[k] == pontos[k+1]){ // verifica se pontos sao iguais
                    if(nome[k] > nome[k+1]){ // verifica se a Letra de K for maior que a Letra de K+1
                        swap(nome[k], nome[k+1]); // entao troca de K para K+1
                    }
                }
            }
        }

        /* BLOCO DE CRIACAO DO RANKING */
        
        int pos[jogador]; // definindo um array com tamanho da quantidade de jogadores
        for(int i=0;i<jogador;i++) // permuta entre 0 ate jogador-1
            pos[i] = i+1; // ja cria uma pos setada independente de acordo com a quantidade de jogadores
        
        // Este for ira comparar a pontuacao e setar a pos identica para tais
        for(int i=0;i<jogador-1;i++) // permuta do loop de 0 ate jogador-2
            if(pontos[i] == pontos[i+1]) // verifica se a pontuacao em 'i' eh igual em 'i+1'
                pos[i+1] = pos[i]; // caso seja, pos de 'i+1' recebe a pos de 'i' que eh a anterior a ele
        
        /* BLOCO DE SAIDA DO RANKING FINAL */
    
        cout << "Teste " << teste << '\n'; // saida do caso de teste em N
        for(int i=0;i<jogador;i++){ // for para ler o ranking no tamanho de jogador
            cout << pos[i] << "  " << nome[i] << "  " << pontos[i] << "\n\n"; // cout com tabulacoes (tab)
        }
    }
    teste++; // incremento da variavel teste
    return 0;
}
