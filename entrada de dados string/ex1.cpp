#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    // Variáveis

    string nome;

    setlocale(LC_ALL,"");
    system("color F1");

    // Código

    cout << "Nome : " ;
    cin >> nome;
    cout << "Hellow , " << nome << "!";
}
