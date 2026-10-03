#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    //Variaveis

    int qnt_minutos = 0;
    int hrs = 0;
    int minutos = 0;

    cout << " Qntda Minutos : " ;
    cin >> qnt_minutos;
    cout << " Horas = " << qnt_minutos/60 <<endl;

    cout << " Minutos = " <<qnt_minutos%60 <<endl;






}
