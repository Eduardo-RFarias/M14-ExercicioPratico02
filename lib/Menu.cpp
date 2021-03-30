#include <Menu.hpp>

void Menu::executar()
{
    Transcritor tr;

    do
    {
        cout << "------------Menu------------" << endl;
        cout << "1 - Carregar banco de dados" << endl;
        cout << "0 - sair                   " << endl;
        cout << "----------------------------" << endl;

        cin >> escolha;

        subirTerminal();

        switch (escolha)
        {
        case '1':
            tr.transcrever();
            break;

        case '0':
            break;

        default:
            cout << "Escolha inválida" << endl;
            break;
        }

    } while (escolha != '0');
}

void Menu::subirTerminal()
{
    for (int i = 0; i < 10; i++)
    {
        cout << endl;
    }
}
