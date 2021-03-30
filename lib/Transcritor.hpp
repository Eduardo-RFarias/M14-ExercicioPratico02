#ifndef TRANSCRITOR
#define TRANSCRITOR

#include <iostream>
#include <fstream>
#include <string>
#include <Coluna.hpp>
using namespace std;

class Transcritor
{
private:
    ifstream bancoDados;
    int tamColunas;
    Coluna *colunas;
    string *chaves;
    int *posicoes;

public:
    Transcritor();
    ~Transcritor();
    void transcrever();
    void lerDados(int *dados);
    void checarNumeroColunas();
};

#endif
