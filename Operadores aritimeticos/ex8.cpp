#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    // Variáveis



    setlocale(LC_ALL,"");
    system("color F1");

    cout <<" Horas completas: " << 135/60 <<endl;
    cout <<" Horas completas: " << 135%60 <<endl;
}
