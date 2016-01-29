#ifndef PICARETA_H
#define PICARETA_H
#include <string>
#include "Bloco.h"
using namespace std;

class Picareta
{
    private:
    string material;
    int durabilidade;
    int forca; 
    
    public:
    Picareta();
    Picareta(const string &);
    int initDurabilidade();//define a durabilidade dependendo do tipo,retorna o valor maximo
    bool atacar( Bloco &);
    bool consertar( Picareta &);
    int mostrarDurabilidade();
};
#endif // PICARETA_H
