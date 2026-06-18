#include <iostream>
#include <vector>
using namespace std;

class Jogos
{
private:
    string timeCasa;
    string timeFora;
    vector<int> placar;

public:

    Jogos()
        : timeCasa(""), timeFora(""), placar(2) {}

    Jogos(string casa, string fora)
        : timeCasa(casa), timeFora(fora), placar(2) {}

    void setPlacar(int golsCasa, int golsFora)
    {
        placar[0] = golsCasa;
        placar[1] = golsFora;
    }

    void setTimes(string casa, string fora)
    {
        timeCasa = casa;
        timeFora = fora;
    }

    int getGolsCasa() const
    {
        return placar[0];
    }

    int getGolsFora() const
    {
        return placar[1];
    }

    string getTimeCasa() const
    {
        return timeCasa;
    }

    string getTimeFora() const
    {
        return timeFora;
    }

    void exibirPlacar()
    {
        cout << timeCasa
             << " "
             << placar[0]
             << " x "
             << placar[1]
             << " "
             << timeFora
             << endl;
    }
};