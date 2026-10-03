#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    //Variaveis

    cout << fixed << setprecision(2);

    float nt_1 = 0;
    float nt_2 = 0;
    float nt_3 = 0;
    float soma = 0;
    float md = 0;

    cout << " Nota 1 : " ;
    cin >> nt_1;
    cout << " Nota 2 : " ;
    cin >> nt_2;
    cout << " Nota 3 : " ;
    cin >> nt_3;
    soma = nt_1+nt_2+nt_3;
    cout << " Média = : " <<soma/3 ;






}
