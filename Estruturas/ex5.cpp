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

    cout << "\n --- Par ou Ímpar ---\n ";
    cout << "\n Digite um Número: ";
    cin >> n;
    if (n % 2 == 0)
    {
         cout << "\n Par !!\n ";
    }

    else
    {
        cout << "\n Ímpar !!\n ";
}
}
