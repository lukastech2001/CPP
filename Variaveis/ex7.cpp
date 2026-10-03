#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    //Variaveis

    float compra = 0;
    float  vlr_pg = 0;

  cout << fixed << setprecision(2);


  cout << "  Valor compra : " ;
  cin >> compra;
  cout << "  Valor pago : " ;
  cin >> vlr_pg;
  cout << " Troco: " << vlr_pg-compra;


}
