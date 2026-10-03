#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    // Variáveis



    setlocale(LC_ALL,"");
    system("color F1");

    cout << " Calculadora simples:\n";
    cout << " 10 + 2 = " << 10+2 <<endl;
    cout << " 10 - 2 = " << 10-2 <<endl;
    cout << " 10 x 2 = " << 10*2 <<endl;
    cout << " 10 / 2 = " << 10/2 <<endl;

}
