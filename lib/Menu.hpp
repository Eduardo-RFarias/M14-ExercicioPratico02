#ifndef MENU
#define MENU

#include <iostream>
#include <fstream>

using namespace std;

class Menu
{
private:
    unsigned short escolha;
    ifstream bancoDados;

public:
    Menu();
    void executar();
    
};

#endif