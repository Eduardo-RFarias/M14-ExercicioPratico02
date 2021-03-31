#ifndef CONSULTOR
#define CONSULTOR

#include <iostream>
#include <Coluna.hpp>
using namespace std;

class Consultor
{
private:
    int *posicoes;
    string *chaves;
    Coluna *colunas;
    int tamColunas;

    int buscaBinaria(string chave);

public:
    Consultor(int posicoes[], string chaves[], Coluna colunas[], int tamColunas);
    void consultar();
};

#endif
