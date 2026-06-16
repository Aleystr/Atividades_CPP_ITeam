#include <iostream>
#include <vector>
#include <random>
using namespace std;

class Jogos
{
    private:
        string timeCasa;
        string timeFora;
        vector <int> placar[2];

    public:
        Jogos(string Casa, string Fora)
            : timeCasa(Casa), timeFora(Fora) {}
            
        void exibirInfo()
};