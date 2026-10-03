#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
    // Variáveis
    cout << fixed << setprecision(2);
    char letra;
    setlocale(LC_ALL,"");
    system("color F1");

    // Código


    do {
    cout << " verificar Operador\n";
    cout << "\n Digite o Operador: ";
    cin >>letra;
    if ( letra == 'A' or letra == 'a')
        cout << "\n Letra aceita";
    else
        cout << "Letra não aceita";
    }
    while (letra == 'A'or letra == 'a');
}

