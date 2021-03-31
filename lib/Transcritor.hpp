#ifndef TRANSCRITOR
#define TRANSCRITOR

#include <iostream>
#include <fstream>
#include <Coluna.hpp>
using namespace std;

class Transcritor
{
private:
    ifstream bancoDados;

    void lerDados(int *dados);
    void checarNumeroColunas();
    void insertSort();

public:
    int tamColunas;
    Coluna *colunas;
    string *chaves;
    int *posicoes;

    Transcritor();
    ~Transcritor();

    void transcrever();
};

#endif
