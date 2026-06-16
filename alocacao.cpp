#include <iostream>
using namespace std;

int main()
{
    int * pi = new int;
    *pi = 1001;
    cout << "Valor inteiro = " << *pi << endl;
    cout << "Localizacao = " << pi << endl << endl;

    double * pd = new double;
    *pd = 500.43;
    cout << "Valor ponto-flutuante" << *pd << endl;
    cout << "Localizacao" << pd << endl << endl;
    
    cout << "Tamanho de pi = " << sizeof(pi) << endl;
    cout << "tamanho de *pi = " << sizeof(*pi) << endl << endl;
    cout << "Tamanho de pd = " << sizeof(pd) << endl;
    cout << "Tamanho de *pd = " << sizeof(*pd) << endl << endl;
}