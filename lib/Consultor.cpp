#include "Consultor.hpp"

Consultor::Consultor(int posicoes[], string chaves[], Coluna colunas[], int tamColunas)
{
    this->tamColunas = tamColunas;
    this->chaves = chaves;
    this->colunas = colunas;
    this->posicoes = posicoes;
}

void Consultor::consultar()
{
    string UF;
    string dia;
    string mes;
    string ano;
    int p;
    do
    {
        cout << "Digite a UF desejada:" << endl;
        cin >> UF;
        cout << "Digite o dia desejado:" << endl;
        cin >> dia;
        cout << "Digite o mes desejado:" << endl;
        cin >> mes;
        cout << "Digite o ano desejado:" << endl;
        cin >> ano;

        string chave = UF + ano + "/" + mes + "/" + dia;

        p = buscaBinaria(chave);

        if (p == -1)
        {
            cout << "### ERRO chave não encontrada ###" << endl;
        }
        else
        {
            break;
        }

    } while (true);

    cout << "------------------------" << endl;
    cout << "Regiao: " << colunas[p].getRegiao() << endl;
    cout << "UF: " << colunas[p].getUF() << endl;
    cout << "Data: " << colunas[p].getData() << endl;
    cout << "Semana: " << colunas[p].getDados()[0] << endl;
    cout << "Populacao: " << colunas[p].getDados()[1] << endl;
    cout << "Casos Acumulados: " << colunas[p].getDados()[2] << endl;
    cout << "Casos Novos: " << colunas[p].getDados()[3] << endl;
    cout << "Óbitos Acumulados: " << colunas[p].getDados()[4] << endl;
    cout << "Óbitos Novos: " << colunas[p].getDados()[5] << endl;
    cout << "------------------------" << endl;
}

int Consultor::buscaBinaria(string chave)
{
    int esquerda = 0;
    int direita = tamColunas - 1;

    int meio;
    string valorLido;

    while (esquerda <= direita)
    {
        meio = (direita + esquerda) / 2;
        valorLido = chaves[meio];

        if (valorLido == chave)
        {
            return posicoes[meio];
        }
        else if (valorLido > chave)
        {
            direita = meio - 1;
        }
        else
        {
            esquerda = meio + 1;
        }
    }

    return -1;
}
