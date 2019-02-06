#include <cstring>
#include <iostream>

struct Jogador
{
  std::string nome;
  int pontos = 0;
  int menor = 9999;
  int maior = 0;
};

int main()
{
  int t = 1;
  int totalJogadores;
  std::cout << "Quantidade de jogadores: ";
  std::cin >> totalJogadores;

  Jogador jogadores[totalJogadores];

  for(int i = 0; i < totalJogadores; i++)
  {
    std::cout << "Digite o nome: ";
    std::cin >> jogadores[i].nome;

    int pontos = 0;
    for(int j = 0; j < 12; j++)
    {
      std::cin >> pontos;
      if(jogadores[i].menor > jogadores[i].pontos){ jogadores[i].menor = jogadores[i].pontos; }
      if(jogadores[i].maior < jogadores[i].pontos){ jogadores[i].maior = jogadores[i].pontos; }
      jogadores[i].pontos += pontos;
    }
    jogadores[i].pontos = jogadores[i].pontos - (jogadores[i].maior + jogadores[i].menor);
  }

  for(int k = 0; k < totalJogadores - 1; k++)
  {
    for(int l = k + 1; l < totalJogadores; l++)
    {
      if(jogadores[k].pontos < jogadores[l].pontos)
        std::swap(jogadores[k], jogadores[l]);

      if(jogadores[k].pontos == jogadores[l].pontos)
        if(jogadores[k].nome > jogadores[l].nome)
          std::swap(jogadores[k], jogadores[l]);
    }
    std::cout << "Teste " << t << '\n';
    for(int i = 0; i < totalJogadores; i++)
      std::cout << i + 1 << " " << jogadores[i].pontos
                << " " << jogadores[i].nome << "\n";
      //std::cout << "NOME: " << jogadores[i].nome << '\n'
      //          << "PONTOS: " << jogadores[i].pontos << "\n\n";
    t++;
  }
// int aux;
// std::cin >> aux;
  return 0;
}
