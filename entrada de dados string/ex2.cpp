#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    // Variáveis

    char letra;

    setlocale(LC_ALL,"");
    system("color F1");

    // Código

    cout << " Digite uma letra : " ;
    cin >> letra;
    cout << "Letra digitada : " << letra;
}

