#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
    // Vari�veis
    cout << fixed << setprecision(2);

    float nt_1,nt_2,nt_3,nt_4 = 0;
    float soma = 0;
    float md = 0;
    float frenq = 0;
    float nDeAulas = 0;
    float nDeAulasFreq = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    // C�digo

    cout << "\n --- M�dia para Aprova��o ---\n ";

    cout << " Nota 1 : " ;
    cin >> nt_1;
    cout << " Nota 2 : " ;
    cin >> nt_2;
    cout << " Nota 3 : " ;
    cin >> nt_3;
    cout << " Nota 4 : " ;
    cin >> nt_4;
    md = nt_1+nt_2+nt_3+nt_4;
    cout << " Sua M�dia = : " << md/4 << endl;
    cout << "\nCalcular  Frequencia Escolar: \n";
    cout << " Minimo exigido é de 75%\n ";
    cout << " Digite o numero de aulas que vc veio: \n";
    cin >> nDeAulasFreq;
    cout << " \n Agora o numero de aulas total do Curso: ";
    cin >> nDeAulas; 
    frenq = (nDeAulasFreq/nDeAulas)*100;
    cout << " Sua Frequencia é de : " << frenq; 
    

    if (md >= 6 and frenq >= 75)
    {
         cout << "\n O aluno foi Aprovado\n ";
    }

    else if (md >= 4 and md <6 and frenq >=75)
    {
        cout << "\n O aluno est� em Reavalia��o !!\n ";
    }
    else
        cout << " O aluno est� reprovado\n";

}
