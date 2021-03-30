#include <Coluna.hpp>

void Coluna::setDados(int dados[])
{
    copy(dados, dados + 6, this->dados);
}
