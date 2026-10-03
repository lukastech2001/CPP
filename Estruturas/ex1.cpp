#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    // Variáveis
    int idade = 0;


    setlocale(LC_ALL,"");
    system("color F1");

    // Código

    cout << "\n --- Permissão para Dirigir ---\n ";
    cout << "\n Digite sua Idade: ";
    cin >> idade;
    if (idade >= 18)
    {
         cout << "\n Você está autorizado a dirigir !!\n ";
    }

    else
    {
        cout << "\n Não tem Permissão para Dirigir !!\n ";
}
}
