#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
    // Variáveis
    cout << fixed << setprecision(2);

    float nt_1,nt_2,nt_3,nt_4 = 0;
    float soma = 0;
    float md = 0;
    float frenq = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    // Código

    cout << "\n --- Média para Aprovação ---\n ";

    cout << " Nota 1 : " ;
    cin >> nt_1;
    cout << " Nota 2 : " ;
    cin >> nt_2;
    cout << " Nota 3 : " ;
    cin >> nt_3;
    cout << " Nota 4 : " ;
    cin >> nt_4;
    md = nt_1+nt_2+nt_3+nt_4;
    cout << " Sua Média = : " << md/4 << endl;
    cout << " Sua frequencia: ";
    cin >>frenq;

    if (md >= 6 and frenq >= 75)
    {
         cout << "\n O aluno foi Aprovado\n ";
    }

    else if (md >= 4 and md <6 and frenq >=75)
    {
        cout << "\n O aluno está em Reavaliação !!\n ";
    }
    else
        cout << " O aluno está reprovado\n";

}
