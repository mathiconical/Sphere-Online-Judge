/*
Por lei, na Nlogônia todas as barras de chocolate são quadradas. Anamaria tem uma barra quadrada de chocolate de lado L, 
que ela quer compartilhar com alguns colegas da obi. Mas ela é uma boa cidadã e cumpre a lei. 
Então, ela divide a barra em quatro pedaços quadrados, de lado L=L/2. Depois, ela repete esse procedimento com cada pedaço gerado, 
sucessivamente, enquanto o lado for maior do que, ou igual a 2cm. Você deve escrever um programa que, dado o lado L da barra inicial, 
em centímetros, determina quantos pedaços haverá ao final do processo.

Entrada
A entrada consiste de uma linha, com um único inteiro, L, o número de centímetros do lado do quadrado.

Saída
Se programa deve imprimir uma única linha, contendo um único inteiro, igual ao número total de pedaços obtidos pela Anamaria.

Restrições
2 ≤ L ≤ 104
*/

#include <iostream>
using namespace std;

int main(void){
 
	int lado, total=1; 
 
	cin >> lado;  // entrada da medida de 1 lado
 
	for(;lado>=2;lado/=2) // dividir cada quadrado sempre em 2cm  
		total *= 2; // guarda o total de quadrados gerados de 2 em 2 cm
 
	cout << total*total; // output do total de quadrados de 2cm
 
	return 0;
}
