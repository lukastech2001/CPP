#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
    // Variáveis
    cout << fixed << setprecision(2);

    float nt_1 = 0;
    float nt_2 = 0;
    float nt_3 = 0;
    float soma = 0;
    float md = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    // Código

    cout << " Nota 1 : " ;
    cin >> nt_1;
    cout << " Nota 2 : " ;
    cin >> nt_2;
    cout << " Nota 3 : " ;
    cin >> nt_3;
    soma = nt_1+nt_2+nt_3;
    cout << " Média = : " << soma/3 << endl;

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

