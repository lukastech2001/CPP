#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
    // Variáveis

    cout << fixed << setprecision(2);
    float md = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    // Código

    cout << "\n --- Média para Aprovação ---\n ";
    cout << "\n Digite sua Média: ";
    cin >> md;

    if (md >= 6)
    {
         cout << "\n O aluno foi Aprovado\n ";
    }

    else
    {
        cout << "\n O aluno foi reprovado !!\n ";
}
}
