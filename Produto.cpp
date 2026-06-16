#include <iostream>
#include <string>
using namespace std;

class Produto 
{
private:
    std::string nome;
    int codigo;
    float preco;

public:
    Produto(std::string nome, int codigo, float preco)
    {
        this -> nome = nome;
        this -> codigo = codigo;
        this -> preco = preco;
    }

    void getNome()
    {
        std::cout << this -> nome << std::endl;
    }

    float getImposto()
    {
        preco *= 1.67;
        return preco;
    }
};

int main()
{
    Produto p1("Caipirinha", 384683, 20.99);

    cout << "Preço após imposto: " << p1.getImposto()  << endl;

return 0;
}


