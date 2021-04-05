#include <iostream>
#include "Transcritor.hpp"
#include "Consultor.hpp"

using namespace std;

void subirTerminal()
{
    for (int i = 0; i < 10; i++)
    {
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    char escolha;
    Transcritor tr;

    do
    {
        cout << "------------Menu------------" << endl;
        cout << "1 - Carregar banco de dados" << endl;
        cout << "2 - Consulta               " << endl;
        cout << "0 - sair                   " << endl;
        cout << "----------------------------" << endl;

        cin >> escolha;

        subirTerminal();

        switch (escolha)
        {
        case '1':
            tr.transcrever();
            break;

        case '2':
            if (tr.isTranscrito())
            {
                Consultor cs(tr.posicoes, tr.chaves, tr.colunas, tr.getTamColunas());
                cs.consultar();
            }
            else
            {
                cout << "### ERRO Carregue o banco de dados primeiro. ###" << endl;
            }
            break;

        case '0':
            break;

        default:
            cout << "Escolha inválida" << endl;
        }

    } while (escolha != '0');

    return 0;
}
