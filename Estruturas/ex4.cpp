#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    // Variáveis
    int n = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    // Código

    cout << "\n --- Positivo ou Negativo ---\n ";
    cout << "\n Digite um Número: ";
    cin >> n;
    if (n > 0)
    {
         cout << "\n Positivo !!\n ";
    }

    else
    {
        cout << "\n Negativo !!\n ";
}
}
