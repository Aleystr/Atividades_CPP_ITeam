#include <iostream>
using namespace std;

class Apostador
{
private:
    string nome;
    int pontuacao;
    int qntJogos;
    Jogos* palpites;

public:
    Apostador(string nome)
        : nome(nome),
          pontuacao(0),
          qntJogos(4),
          palpites(new Jogos[qntJogos]) {}

    ~Apostador()
    {
        delete[] palpites;
    }

    int getPontuacao() const
    {
        return pontuacao;
    }

    string getNome() const
    {
        return nome;
    }

    void setPontuacao(int pontos)
    {
        pontuacao = pontos;
    }

    Jogos& getPalpite(int indice)
    {
        return palpites[indice];
    }
};