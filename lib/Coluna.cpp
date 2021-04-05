#include "Coluna.hpp"

Coluna::Coluna()
{
    for (int i = 0; i < DADOS_SIZE; i++)
    {
        this->dados[i] = 0;
    }
}

Coluna::Coluna(string codigo, string regiao, string UF, string data, int dados[DADOS_SIZE])
{
    this->codigo = codigo;
    this->regiao = regiao;
    this->UF = UF;
    this->data = data;

    for (int i = 0; i < DADOS_SIZE; i++)
    {
        this->dados[i] = dados[i];
    }
}

string Coluna::getCodigo()
{
    return codigo;
}

string Coluna::getRegiao()
{
    return regiao;
}

string Coluna::getUF()
{
    return UF;
}

string Coluna::getData()
{
    return data;
}

int *Coluna::getDados()
{
    return dados;
}
