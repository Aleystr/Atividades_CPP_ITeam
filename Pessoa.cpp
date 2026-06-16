#include <iostream>
using namespace std;
class Pessoa
{
private:
    string nome;
    int idade;

public:
    Pessoa(string nome, int idade)
    {
        this -> nome  =  nome;
        this -> idade =  idade;
    }

    void getDados()
    {
        cout << "nome: " << nome << endl <<
                "idade: " << idade << endl;
    }
};

int main()
{
    Pessoa p1("Tonhão", 9);
    Pessoa p2("Miguel", 67);

    p1.getDados();
    p2.getDados();
return 0;
}


