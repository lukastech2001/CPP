#include <iostream>
#include <locale.h>
using namespace std;

// Definição das cores
#define RESET    "\033[34m"
#define VERMELHO "\033[31m"
#define VERDE    "\033[32m"
#define AMARELO  "\033[33m"

int main()
{
    // Variáveis
    int idade = 0;
    char decisao;

    setlocale(LC_ALL,"");
    system("color F1");

    // Código

    cout << " Digite a idade do Atleta: ";
    cin >> idade;

    if (idade < 10)
    {
        cout << VERMELHO << "Mirim" << endl;
    }
    else if (idade <= 13)
    {
        cout << AMARELO << "Infantil" << endl;
    }
    else if (idade >= 14)
    {
        cout << VERDE << "Juvenil" << endl;
    }
    else if (idade >= 15)
    {
        cout << VERDE << "Juvenil" << endl;
    }
    else
        cout << RESET << " Adulto ";
        cout << " \nDeseja continuar?\n ";
        cin >> decisao;

    while ( decisao == 's')
    {
         cout << " Digite a idade do Atleta: ";
    cin >> idade;

    if (idade < 10)
    {
        cout << VERMELHO << "Mirim" << endl;
    }
    else if (idade <= 13)
    {
        cout << AMARELO << "Infantil" << endl;
    }
    else if (idade >= 14)
    {
        cout << VERDE << "Juvenil" << endl;
    }
    else if (idade >= 15)
    {
        cout << VERDE << "Juvenil" << endl;
    }
    else
        cout << RESET << " Adulto ";
    {

    }

}
}
