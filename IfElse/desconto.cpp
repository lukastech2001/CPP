#include <iostream>
#include <locale.h>
using namespace std;

// Defini��o das cores
#define RESET    "\033[34m"
#define VERMELHO "\033[31m"
#define VERDE    "\033[32m"
#define AMARELO  "\033[33m"

int main()
{
    // Vari�veis
    int valorCompra = 0;
    char decisao;

    setlocale(LC_ALL,"");
    system("color F1");

    // C�digo

    cout << " Digite o valor total da Compra: ";
    cin >> valorCompra;

    if ( valorCompra < 100)
    {
        cout << VERMELHO << "Sem desconto" << endl;
    }
    else if (valorCompra <= 499)
    {
        // 0,95 seriam os 95%, j� que 5% vai sr o desconto;
         valorCompra*0,95;
        cout << AMARELO  << "5% de desconto " << endl;
    }
    else if (valorCompra <= 999)
    {
        valorCompra*0,9;
        cout << VERDE  << "10% de desconto " << endl;
    }
    else
    {
        valorCompra << 0,85;
        cout << VERDE  << "15% de desconto" << endl;
    }

    while ( valorCompra > 0)
    {

        cout << " Digite o valor total da Compra: ";
    cin >> valorCompra;

    if ( valorCompra < 100)
    {
        cout << VERMELHO << "Sem desconto" << endl;
    }
    else if (valorCompra <= 499)
    {
        // 0,95 seriam os 95%, j� que 5% vai sr o desconto;
         valorCompra*0,95;
        cout << AMARELO  << "5% de desconto " << endl;
    }
    else if (valorCompra <= 999)
    {
        valorCompra*0,9;
        cout << VERDE  << "10% de desconto " << endl;
    }
    else
    {
        valorCompra << 0,85;
        cout << VERDE  << "15% de desconto" << endl;
    }


    }

}
