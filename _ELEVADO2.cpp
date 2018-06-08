/*
A Subindo Bem Confortavelmente (SBC) é uma empresa tradicional, com mais de 50 anos de experiência na fabricação de elevadores. 
Todos os projetos da SBC seguem as mais estritas normas de segurança, mas infelizmente uma série de acidentes com seus elevadores
manchou a reputação da empresa.

Ao estudar os acidentes, os engenheiros da companhia concluíram que, em vários casos, o acidente foi causado pelo excesso 
de passageiros no elevador. Por isso, a SBC decidiu fiscalizar com mais rigor o uso de seus elevadores: 
foi instalado um sensor em cada porta que detecta a quantidade de pessoas que saem e entram em cada andar do elevador.

A SBC tem os registros do sensor de todo um dia de funcionamento do elevador (que sempre começa vazio).
Eles sabem que as pessoas são educadas e sempre deixam todos os passageiros que irão sair em um andar saírem antes de 
outros passageiros entrarem no elevador, mas ainda assim eles têm tido dificuldade em decidir se a capacidade máxima do 
elevador foi excedida ou não.

* Tarefa
Escreva um programa que, dada uma sequência de leituras do sensor e a capacidade máxima do elevador, 
determina se a capacidade máxima do elevador foi excedida em algum momento.

* Entrada
A primeira linha da entrada contém dois inteiros N e C, indicando o número de leituras realizadas pelo sensor e a 
capacidade máxima do elevador, respectivamente (1 ≤ N ≤ 1000 e 1 ≤ C ≤ 1000). As N linhas seguintes contêm, cada uma, 
uma leitura do sensor. Cada uma dessas linhas contém dois inteiros S e E, indicando quantas pessoas saíram e quantas 
pessoas entraram naquele andar, respectivamente (0 ≤ S ≤ 1000 e 0 ≤ E ≤ 1000)

* Saída
Seu programa deve imprimir uma única linha contendo o caractere 'S', caso a capacidade do elevador tenha sido excedida
em algum momento, ou o caractere 'N' caso contrário. 
*/

#include <iostream>
using namespace std;

int main(void){
    
    int leitura, capacidade, entra, sai, t=0; // definindo variaveis
    bool g = false;
    
    cin >> leitura >> capacidade; // entrada de dados
    
    for(int i=0;i<leitura;i++){ // loop coleta de dados
        
        cin >> sai >> entra; // pessoas que sairam e entraram
        
        t += (entra-sai); // calculo do total que ficaram no elevador
        
        if(t>capacidade) // verifica se ultrapassaram a capacidade
            g=true; // g recebe true    
    }
    
    if(g==true) cout << "S"; // saida caso excedeu
    else     cout << "N"; // saida caso nao excedeu

    return 0;
}
