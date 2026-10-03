#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    // Variáveis

    string nome;
    char inicial;

    setlocale(LC_ALL,"");
    system("color F1");

    // Código

    cout << " Digite seu nome : " ;
    cin >> nome;
    cout << "Digite Sobrenome : " ;
    cin >> inicial;
    cout << " Nome: " << nome << endl;
    cout << " Inicial do Sobrenome: " << inicial;
}

