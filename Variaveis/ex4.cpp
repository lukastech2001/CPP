#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
    //Variaveis

  float valor_conta = 0;
  int  qnt_pss = 0;

  cout << fixed << setprecision(2);


  cout << "  Valor da conta : " ;
  cin >> valor_conta;
  cout << "  Qtda de Pessoas : " ;
  cin >> qnt_pss;
  cout << " Valor por Pessoa : " << valor_conta/qnt_pss;








}
