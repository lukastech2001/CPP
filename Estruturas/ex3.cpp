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

    cout << "\n --- Permissão para Votar ---\n ";
    cout << "\n Digite sua Idade: ";
    cin >> idade;
    if (idade >= 16)
    {
         cout << "\n Você pode Votar !!\n ";
    }

    else
    {
        cout << "\n Você Não pode Votar !!\n ";
}
}

