#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    //Variaveis

    double dist_km = 0;
    double tempo_hr = 0;

    cout << " Distância (Km) : " ;
    cin >> dist_km;
    cout << " Tempo (Horas) = " ;
    cin >> tempo_hr;
    cout << " Velocidade média (Km/h) = " << dist_km/tempo_hr;








}

