#include <iostream>
#include "Jogos.cpp"
#include "Apostador.cpp"

using namespace std;
int main()
{
    Jogos jogosReais[4];
    jogosReais[0].setTimes("Brasil", "Argentina");
    jogosReais[1].setTimes("Espanha", "Franca");
    jogosReais[2].setTimes("Italia", "Alemanha");
    jogosReais[3].setTimes("Portugal", "Inglaterra");

    Apostador* apostadores[20];
    int qtdApostadores = 0;

    int opcao;

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1 - Cadastrar resultados\n";
        cout << "2 - Cadastrar apostador\n";
        cout << "3 - Registrar palpites\n";
        cout << "4 - Calcular pontuacao\n";
        cout << "5 - Exibir ranking\n";
        cout << "0 - Sair\n";

        cin >> opcao;
        
        switch (opcao)
        {
            case 1: 
            {
                int golsCasa;
                int golsFora;

                for(int i = 0; i < 4;i++)
                {
                    cout << "\nJogo " << i + 1 << endl;

                    cout << "Gols da casa: ";
                    cin >> golsCasa;

                    cout << "Gols visitante: ";
                    cin >> golsFora;

                    jogosReais[i].setPlacar(golsCasa, golsFora);
                }
                break;
            }   
            case 2:
            {
                string nome;

                cout << "Nome do apostador: ";
                cin >> nome;

                apostadores[qtdApostadores] =
                new Apostador(nome);

                qtdApostadores++;

                break;
            }

            case 3:
            {
                int indice;

                cout << "\n Apostadores cadastrados: \n";
                for (int i = 0; i < qtdApostadores; i++)
                {
                    cout << i
                    << " - "
                    << apostadores[i]->getNome()
                    << endl;
                }

                cout << "\nEscolha o indice do apostador: ";
                cin >> indice;

                for (int i = 0; i < 4; i++)
                {
                    int golsCasa;
                    int golsFora;

                    cout << "\n"
                        << jogosReais[i].getTimeCasa()
                        << " x "
                        << jogosReais[i].getTimeFora()
                        << endl;

                    cout << "Gols casa: ";
                    cin >> golsCasa;

                    cout << "Gols fora: ";
                    cin >> golsFora;

                    apostadores[indice]
                    ->getPalpite(i)
                    .setPlacar(golsCasa, golsFora);
                }
                break;
            }    
            
            case 4:
            {
                for (int i = 0; i < qtdApostadores; i++)
                {
                    int pontos = 0;

                    for (int j = 0; j < 4; j++)
                    {
                        Jogos& palpite =
                        apostadores[i]->getPalpite(j);

                        if(
                            palpite.getGolsCasa() ==
                            jogosReais[j].getGolsCasa()
                            &&
                            palpite.getGolsFora() ==
                            jogosReais[j].getGolsFora()
                        )
                        {
                            pontos += 3;
                        }
                    }
                    apostadores[i]->setPontuacao(pontos);
                }               
                cout << "\n Pontuação calculada";
                break;
            }
            case 5:
            {
                cout << "\n===== RANKING =====\n";

                for(int i = 0; i < qtdApostadores; i++)
                {
                    cout
                        << apostadores[i]->getNome()
                        << " - "
                        << apostadores[i]->getPontuacao()
                        << " pontos"
                        << endl;
                }

                break;
            }
        }
    }
    while (opcao != 0);

    for(int i = 0; i < qtdApostadores; i++)
    {
        delete apostadores[i];
    }
    
    return 0;
}