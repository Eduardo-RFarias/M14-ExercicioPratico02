#ifndef COLUNA
#define COLUNA

#include <iostream>
using namespace std;

#define DADOS_SIZE 6
#define STREAM_SIZE 256

class Coluna
{
private:
    string codigo;
    string regiao;
    string UF;
    string data;
    int dados[DADOS_SIZE];

public:
    Coluna();
    Coluna(string codigo, string regiao, string UF, string data, int dados[DADOS_SIZE]);

    string getCodigo();
    string getRegiao();
    string getUF();
    string getData();
    int *getDados();
};

#endif
