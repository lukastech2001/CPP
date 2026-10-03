#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

// Definicao das cores
#define RESET    "\033[34m"
#define VERMELHO "\033[31m"
#define VERDE    "\033[32m"
#define AMARELO  "\033[33m"


double converterValor(string entrada)
{
    string numero;

    for (char caractere : entrada)
    {
        if (caractere == '.')
        {
            continue;
        }
        else if (caractere == ',')
        {
            numero += '.';
        }
        else
        {
            numero += caractere;
        }
    }
    return stod(numero);
}
int main()
{
    setlocale(LC_ALL, "");
    system("color F1");

    int opcao;

    double saldo = 1000.00;
    double valor;
    double saque;
    string entrada;
    char operacao;
    do
    {
        cout << "\n--- Operacoes Banco ---\n";

        cout << "\nEscolha uma das opcoes:\n";

        cout << "\n1 -> Ver Saldo";
        cout << "\n2 -> Depositar Dinheiro";
        cout << "\n3 -> Sacar Dinheiro";
        cout << "\nDigite a Opcao: ";
        cin >> opcao;
        switch (opcao)
        {
        case 1:
            cout << "\nSaldo disponivel: " << saldo << "\n";
            break;
        case 2:
            do
            {
                cout << "\nDigite o Valor do Deposito: ";
                cin >> entrada;
                valor = converterValor(entrada);
                if (valor <= 0)
                {
                    cout << "\nDeposito invalido!\n";
                }
            } while (valor <= 0);
            saldo = saldo + valor;
            cout << "\nDeposito realizado com sucesso!\n";
            break;
        case 3:
            do
            {
                cout << "\nDigite o valor do Saque: ";
                cin >> entrada;
                saque = converterValor(entrada);
                if (saque <= 0)
                {
                    cout << "\nValor de saque invalido!\n";
                }
                else if (saque > saldo)
                {
                    cout << "\nSaldo insuficiente!\n";
                }
            } while (saque <= 0 || saque > saldo);
            saldo = saldo - saque;
            cout << "\nAguarde um momento...\n";
            cout << "\nValor Sacado com Sucesso!\n";
            break;
        default:
            cout << "\nOpcao Invalida!\n";
        }
        cout << "\nDeseja realizar outra operacao?\n";
        cout << "\ns para sim";
        cout << "\nn para sair\n";
        cin >> operacao;


    } while (operacao == 's' || 'S');
    cout << "\nOperacao Encerrada\n";
    cout << "\nAgradecemos!\n";
}