/*
Beatriz gosta muito de jogar cartas com as amigas. Para treinar memória e raciocínio lógico, 
ela inventou um pequeno passatempo com cartas. Ela retira as cinco primeiras cartas do topo de um baralho bem embaralhado, 
e as coloca em sequência, da esquerda para a direita, na mesa, com as faces voltadas para baixo.

Então ela olha, por um breve instante, cada uma das cartas da sequência (e logo as recoloca na mesa, com a face para baixo). 
Usando apenas a sua memória, Beatriz deve agora dizer se a sequência de cartas está ordenada crescentemente, decrescentemente, 
ou não está ordenada.

De tanto jogar, ela está ficando cansada, e não confia em seu próprio julgamento para saber se acertou ou errou. 
Por isso, ela pediu para você fazer um programa que, dada uma sequência de cinco cartas, 
determine se a sequência dada está ordenada crescentemente, decrescentemente, ou não está ordenada.

* Entrada
A entrada consiste de uma única linha que contém as cinco cartas da sequência. 
Os valores das cartas são representados por inteiros entre 1 e 13. As cinco cartas têm valores distintos.

* Saída
Seu programa deve produzir uma única linha, contendo um único caractere maiúsculo:
‘C’ caso a sequência dada esteja ordenada crescentemente, ‘D’ se estiver ordenada decrescentemente, ou ‘N’ caso contrário.

Restrições
• o valor de cada carta é um inteiro entre 1 e 13.
*/

#include <iostream>
using namespace std;

int main(void){

        int n1,n2,n3,n4,n5; // definindo variaveis

        cin >> n1 >> n2 >> n3 >> n4 >> n5; // entrada usuario

        if((n1>=1 and n1<=13) and (n2>=1 and n2<=13) and (n3>=1 and n3<=13) and
           (n4>=1 and n4<=13) and (n5>=1 and n5<=13)){ // condicao de existencia das cartas


                    if((n1<n2) and (n2<n3) and (n3<n4) and (n4<n5)) // Se sucessores sao maior que anteriores
                            cout << "C\n"; // Saida C

                    else if((n1>n2) and (n2>n3) and (n3>n4) and (n4>n5)) // Se Sucessores sao menor que anteriores
                            cout << "D\n"; // Sida D

                    else // Se nao estiver em ordem
                            cout << "N\n"; // Saida N
            }
        return 0;
}
