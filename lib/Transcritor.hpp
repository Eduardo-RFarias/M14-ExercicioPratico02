#ifndef TRANSCRITOR
#define TRANSCRITOR

#include <iostream>
#include <fstream>
#include <Coluna.hpp>
using namespace std;

class Transcritor
{
public:
    ifstream bancoDados;
    int tamColunas;
    Coluna *colunas;
    string *chaves;
    int *posicoes;

    void lerDados(int *dados);
    void checarNumeroColunas();
    void insertSort();

    Transcritor();
    ~Transcritor();
    void transcrever();
};

#endif
