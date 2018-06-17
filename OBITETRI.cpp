/* ESTE CODIGO EH FERENTE AO DESAFIO DO SPOJ ( https://br.spoj.com/problems/OBITETRI/ )
 * ESTOU SUBINDO ELE MAS AINDA NÃO ESTÁ PRONTO, PARTE DELE ESTA INACABADA.
 * ESTA PARTE EH SIMPLESMENTE A DO RANKING, CASO PONTOS SEJAM IGUAIS O RANKING DEVE SER ASSIM:
 * 1 3000 CADAO
 * 1 3000 JOAO
 * 3 2100 ILLINOIS
 * COMO SE PERCEBE, CASO PONTUACAO FOR IGUAL, NAO HA UM SEGUNDO LUGAR, AMBOS OBTEM O MESMO PALANQUE.
 * ESTA EH A PARTE QUE FALTA IMPLEMENTAR, NO CASO, ELE APRESENTA COMO SAIDA ASSIM:
 * 1 3000 CADAO
 * 2 3000 JOAO
 * 3 2100 ILLINOIS
 * NAO CONSEGUI TERMINAR AINDA, CASO UM DOS COMPANHEIROS DA CLASSE CONSIGA IMPLEMENTAR, FAVOR ENTRAR EM
 * CONTATO COMIGO.
 * GRATO, ATT, NETO!
 */

#include <cstring>
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
    
        int pontos[jogador]; // array para armazenar pontos por 'n' jogadores

        /* BLOCO DE ENTRADA DE DADOS */
    
        for(i=0;i<jogador;i++){ // loop para nome
//            cout << "Entre com " << i+1 << " nome do jogador.\n";
            cin >> nome[i]; // entrada do nome em 'i'
            
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
        cout << "Teste " << teste << '\n'; // saida do caso de teste em N
        /* BLOCO PARA EXIBIR O RANKING */
        for(int i=0;i<jogador;i++){ // for para ler o ranking no tamanho de jogador
            cout << i+1 << '\t' << nome[i] << '\t' << pontos[i] << '\n'; // cout com tabulacoes (tab)
        }
    }
    teste++; // incremento da variavel teste
    return 0;
}
