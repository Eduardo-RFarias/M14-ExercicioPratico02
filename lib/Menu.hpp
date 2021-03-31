#ifndef MENU
#define MENU

#include <iostream>
#include <Transcritor.hpp>
#include <Consultor.hpp>
using namespace std;

class Menu
{
private:
    char escolha;

    void subirTerminal();

public:
    void executar();
};

#endif
