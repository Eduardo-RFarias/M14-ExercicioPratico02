#include "Transcritor.hpp"

Transcritor::Transcritor()
{
    this->transcrito = false;
}

Transcritor::~Transcritor()
{
    delete[] colunas;
    delete[] chaves;
    delete[] posicoes;
}

void Transcritor::transcrever()
{
    string nomeArquivo;
    string codigo;
    string regiao;
    string UF;
    string data;
    int dados[DADOS_SIZE];

    do
    {
        cout << "Qual o nome do arquivo a ser lido?" << endl;
        cin >> nomeArquivo;
        bancoDados.open(nomeArquivo);
        if (bancoDados.is_open())
        {
            break;
        }
        else
        {
            cout << "### ERRO ao abrir o arquivo, confira o nome correto. ###" << endl;
        }
    } while (true);

    checarNumeroColunas();

    colunas = new Coluna[tamColunas];
    chaves = new string[tamColunas];
    posicoes = new int[tamColunas];

    bancoDados.ignore(STREAM_SIZE, '\n');

    for (int i = 0; i < tamColunas; i++)
    {
        getline(bancoDados, codigo, ';');
        getline(bancoDados, regiao, ';');
        getline(bancoDados, UF, ';');
        getline(bancoDados, data, ';');
        lerDados(dados);

        Coluna modelo(codigo, regiao, UF, data, dados);

        chaves[i] = codigo;
        posicoes[i] = i;
        colunas[i] = modelo;
    }

    bancoDados.close();

    insertSort();

    transcrito = true;
}

void Transcritor::lerDados(int dados[DADOS_SIZE])
{
    string aux;

    for (int i = 0; i < DADOS_SIZE - 1; i++)
    {
        getline(bancoDados, aux, ';');
        dados[i] = stoi(aux);
    }

    getline(bancoDados, aux);
    dados[DADOS_SIZE - 1] = stoi(aux);
}

void Transcritor::checarNumeroColunas()
{
    tamColunas = 0;

    bancoDados.ignore(STREAM_SIZE, '\n');

    while (bancoDados.good())
    {
        bancoDados.ignore(STREAM_SIZE, '\n');
        tamColunas++;
    }

    bancoDados.clear();
    bancoDados.seekg(0);
}

void Transcritor::insertSort()
{
    int i;
    int aux2;
    string aux;

    for (int j = 1; j < tamColunas; j++)
    {
        aux = chaves[j];
        aux2 = posicoes[j];
        i = j - 1;

        while (i >= 0 && chaves[i] > aux)
        {
            chaves[i + 1] = chaves[i];
            posicoes[i + 1] = posicoes[i];
            i--;
        }

        chaves[i + 1] = aux;
        posicoes[i + 1] = aux2;
    }
}

int Transcritor::getTamColunas()
{
    return tamColunas;
}

bool Transcritor::isTranscrito()
{
    return transcrito;
}