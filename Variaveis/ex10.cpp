#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    cout << fixed << setprecision(2);
    //Variaveis

    double preco = 0;
    int qntd = 0;
    double desconto = 0;

    cout << " Preço : ";
    cin >> preco;
    cout << " Quantidade : ";
    cin >> qntd;
    cout << " Desconto : ";
    cin >> desconto;
    cout << " Total sem desconto = " << preco*qntd <<endl;
    cout << " Valor final = " << preco*qntd-desconto <<endl;







}

