#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    // Variáveis

   string nome;
   char equipe;
   bool pronto;

    setlocale(LC_ALL,"");
    system("color F1");

    // Código

    cout << " Jogador 1: ";
    cin >> nome;
    cout << " Equipe: ";
    cin >> equipe ;
    cout << " Está Pronto?\n ";
    cout << " 1 = Sim / 0 = Não: ";
    cin >> pronto ;
    cout << endl;
    cout << " Jogador: " <<nome << endl;
    cout << " Equipe: " <<equipe << endl;
    cout << " Pronto: " << pronto;






}
