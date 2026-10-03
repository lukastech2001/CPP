#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    //Variaveis

    double vlr = 0;
    int  qnt_cmp = 0;

  cout << fixed << setprecision(2);


  cout << "  Preço : " ;
  cin >> vlr;
  cout << "  Qtda Comprada : " ;
  cin >> qnt_cmp;
  cout << " Total : " << vlr*qnt_cmp;


}





