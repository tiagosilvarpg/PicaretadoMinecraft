#ifndef MAPA_H
#define MAPA_H
#include <string>
#include "Bloco.h"
using namespace std;
class Mapa
{
    private:
    Bloco *grid;
    int tamanho,playerX;
    
    public:    
    Mapa();
    Mapa(const string &);
    void refresh();
    Bloco& bloco(int);
    ~Mapa();
};
#endif
