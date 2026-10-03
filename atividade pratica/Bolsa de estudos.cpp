#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    // Variáveis


    setlocale(LC_ALL,"");
    system("color F1");

    // Código
    int idade=0;
    double renda = 0;

    cout << " Programa Bolsa de Estudos \n";
    cout << " Digite sua idade : ";
    cin >>idade;
    cout << " Digite sua Renda : ";
    cin >>renda;

    if (idade >= 18 and renda <= 1500)
    {
        cout << " Pode Concorrer a Bolsa\n";
    }
    else
    {
        cout << " Não Pode Concorrer a Bolsa\n";
    }





}
