#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    //Variaveis

    int ano_nasc = 0;
    int ano_atual = 0;

    //Codigo
    cout << " Calculando Idade:\n ";
    cout << " Digite o Ano Atual: ";
    cin  >> ano_atual;
    cout << " Digite o Ano de Nascimento: " ;
    cin  >> ano_nasc;
    cout << "Idade = " << ano_atual-ano_nasc;

}
