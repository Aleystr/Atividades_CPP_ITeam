#include <iostream>

using namespace std;

class Animal
{
private:
    string especie;
    string som;

public:
    Animal(string especie, string som)
    {
        this -> especie = especie;
        this -> som     = som; 
    }

    string emitirSom()
    {
        
    }
};
