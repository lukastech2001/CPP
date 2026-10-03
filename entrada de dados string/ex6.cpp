#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    // Variáveis

   string produto;
   char categ;
   bool disponivel;

    setlocale(LC_ALL,"");
    system("color F1");

    // Código

    cout << " Qual Produto: ";
    cin >> produto;
    cout << " Qual Categoria: ";
    cin >> categ ;
    cout << " Está Disponível? ";
    cout << " 1 = Sim / 0 = Não " ;
    cin >> disponivel;
    cout << endl;
    cout << " --- PRODUTO --- \n" ;
    cout << "\n Nome do Produto: " <<produto << endl;
    cout << " Categoria: " <<categ << endl;
    cout << " Disponível: " << disponivel;






}

