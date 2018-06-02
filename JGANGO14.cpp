/*
Joãozinho acaba de mudar de escola e a primeira coisa que percebeu na nova escola é que a gangorra do parquinho não é simétrica, 
uma das extremidades é mais longa que a outra. Após brincar algumas vezes com um amigo de mesmo peso, 
ele percebeu que quando está em uma extremidade, a gangorra se desequilibra para o lado dele 
(ou seja, ele fica na parte de baixo, e o amigo na parte de cima), mas quando eles trocam de lado, 
a gangorra se desequilibra para o lado do amigo. Sem entender a situação, Joãozinho pediu ajuda a outro amigo de outra série, 
que explicou que o comprimento do lado interfere no equilíbrio da gangorra, pois a gangorra estará equilibrada quando

P1 ∗ C1 = P2 ∗ C2

onde P1 e P2 são os pesos da criança no lado esquerdo e direito, respectivamente, 
e C1 e C2 são os comprimentos da gangorra do lado esquerdo e direito, respectivamente.

Com a equação, Joãozinho já consegue dizer se a gangorra está equilibrada ou não mas, além disso, 
ele quer saber para qual lado a gangorra descerá caso esteja desequilibrada.

Entrada
A primeira e única linha da entrada contém 4 inteiros, P1, C1, P2 e C2 , nesta ordem.

Saída
Se a gangorra estiver equilibrada, imprima ‘0’. Se ela estiver desequilibrada de modo que a criança esquerda esteja na parte de baixo, 
imprima ‘-1’, senão, imprima ‘1’.

Restrições
• 10 ≤ P1 ≤ 100 e 10 ≤ C1 ≤ 100
• 10 ≤ P2 ≤ 100 e 10 ≤ C2 ≤ 100
*/

#include <iostream>
using namespace std;
 
int main(void){ // peso_1 * comprimento_1 = peso_2 * comprimento_2
	int p1, c1, p2, c2;
 
	cin >> p1 >> c1 >> p2 >> c2;
  
	if((p1 >= 10 && p1 <= 100) && (c1 >= 10 && c1 <= 100) &&
	   (p2 >= 10 && p2 <= 100) && (c2 >= 10 && c2 <= 100)){ // condições de peso e comprimento
	
   		if(p1*c1 > p2*c2) // se lado esquerdo estiver mais pesado
			cout << -1;
		
   		else if(p1*c1 < p2*c2)  // se lado direito estiver mais pesado
			cout << 1;
		
   		else if(p1*c1 == p2*c2) // se ambos estiverem no mesmo peso
			cout << 0;
}
 
	return 0; 
}
