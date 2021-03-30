#ifndef COLUNA
#define COLUNA

#include <iostream>
using namespace std;

class Coluna
{
public:
    string codigo;
    string regiao;
    string UF;
    string data;
    int dados[6];

    void setDados(int dados[]);
};

#endif
