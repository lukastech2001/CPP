#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    // Variáveis

   bool estudante;


    setlocale(LC_ALL,"");
    system("color F1");

    // Código

    cout << "Você é estudante? (1 = Sim / 0 = Não) ";
    cin >> estudante ;
    cout << " Valor armazenado :" << estudante;




}
