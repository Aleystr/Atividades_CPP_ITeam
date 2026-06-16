#include <iostream>

using namespace std;

class ContaBancaria
{
private:
    string titular;
    float saldo;

public: 
    ContaBancaria(string titular)
    {
        this -> titular = titular;
        this -> saldo   = 0;
    }

    bool Depositar(float quantidade)
    {
        if (quantidade > 0)
        {
            saldo += quantidade;
            return true;
        } 
        return false;
    }

    bool Sacar(float quantidade)
    {
        if (saldo > quantidade)
        {
            saldo -= quantidade;
            return true;
        }
        return false;
    }

    void getDadosBancarios()
    {
        cout << "Titular: " << titular << endl
             << "Saldo: "   << saldo   << endl;
    }

};

int main()
{
    ContaBancaria b1("Dalva");

    b1.Sacar(100);
    b1.Depositar(500);
    b1.getDadosBancarios();
    b1.Sacar(300);
    b1.getDadosBancarios();

return 0;
}