/*
Bruno é um menino que gosta muito de ver televisão. No entanto ele se depara com um problema muito chato. 
Sempre que começa um novo programa no canal preferido dele, a TV Nlogônia, acontece de o volume do som deste programa 
estar diferente do anterior, às vezes com volume menor, outras vezes com volume maior. Quando está com volume menor, 
ele aumenta o volume pressionando uma quantidade de vezes seguidas o botão de aumentar para o volume ficar ideal; 
a mesma coisa acontece quando está um volume maior, e ele diminui o volume pressionando alguma quantidade de vezes 
seguidas o botão de diminuir o volume para ficar com o volume que ele goste no momento.

O aparelho de TV dele tem umas peculiaridades: ele possui volume mínimo, com valor 0 (também chamado de mudo), 
e volume máximo, com valor 100. A TV nunca ultrapassa os volumes máximo e mínimo. Por exemplo, 
se o volume já estiver no máximo e ele pressionar o botão de aumentar o som, o volume não se altera. 
Da mesma forma, se o volume estiver no valor mínimo e ele pressionar o botão de diminuir o som, o volume não se altera.

Agora Bruno quer sua ajuda: ele lembra qual era o volume inicial da TV, e quantas vezes ele pressionou cada botão. 
Mas, como foram várias mudanças de volume, ele não sabe qual é o volume atual da TV. Por isso, 
pediu que você o ajude a calcular qual é o volume atual, dados o volume inicial e a lista de trocas de volume que ele realizou.

* Entrada
A primeira linha da entrada contém dois números inteiros V e T, que indicam, respectivamente, o volume inicial e o número de 
trocas de volume.

A segunda linha contém T números inteiros Ai que mostram as modificações de volume realizadas, na ordem em que estas 
modificações foram feitas. O primeiro número indica a primeira modificação de volume, o segundo número indica a segunda 
modificação, e assim por diante. Para cada modificação, um número maior do que zero significa quantas vezes Bruno 
pressionou o botão de aumentar o som; um número menor do que zero significa quantas vezes ele pressionou o botão de 
diminuir o som. Ou seja, se o número é igual a 5, significa que nessa modificação ele pressionou cinco vezes o botão 
de aumentar o som; se o número é igual a -3, significa que nessa modificação ele pressionou o botão de diminuir o som três vezes.

* Saída
Seu programa deve imprimir apenas uma linha, contendo apenas um inteiro F, que indica qual o volume atual da TV após as mudanças
de volume.

* Restrições
    0 ≤ V ≤ 100
    0 ≤ T ≤ 1000
    Para cada variação de volume Ai, -100 ≤ Ai ≤ 100
*/

#include <iostream>
using namespace std;

int main(void){
        
    // vol_ini   = volume inicial
    // qnt_troca = quantidade de troca do volume
    
    int vol_ini, qnt_troca, troca; // definindo variaveis

    cin >> vol_ini >> qnt_troca; // solicita entrada de volume

    for(;qnt_troca>0;qnt_troca--){ // loop do calculo de trocas
        cin >> troca; // entra com troca 
        
        vol_ini+=troca; // altera o volume
        
        if(vol_ini>100) // verifica se volume excede 100
            vol_ini = 100; // limita o volume maximo a 100
            
        else if(vol_ini<0) // verifica se o volume e menor que 0
            vol_ini = 0; // limita o volume minimo a 0
        
    }

    cout << vol_ini << "\n"; // saida do volume final da TV
    
    return 0;
}
