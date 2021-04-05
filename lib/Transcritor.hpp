#ifndef TRANSCRITOR
#define TRANSCRITOR

#include <iostream>
#include <fstream>
#include "Coluna.hpp"
using namespace std;

class Transcritor
{
private:
    ifstream bancoDados;
    int tamColunas;
    bool transcrito;

    void lerDados(int dados[DADOS_SIZE]);
    void checarNumeroColunas();
    void insertSort();

public:
    Coluna *colunas;
    string *chaves;
    int *posicoes;

    Transcritor();
    ~Transcritor();

    void transcrever();
    int getTamColunas();
    bool isTranscrito();
};

#endif
