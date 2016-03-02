#ifndef PICARETA_H
#define PICARETA_H
#include <string>
#include "Bloco.h"
#include "Spell.h"
#include "Ferramenta.h"
using std::string;

class Picareta : protected Ferramenta
{
    public:
    Picareta();
    Picareta(const string &);
    Picareta(const Picareta &);
    ~Picareta();

    int initDurabilidade();//define a durabilidade dependendo do tipo,retorna o valor maximo
    friend ostream & operator<<(ostream & ,const Picareta &);
    bool atacar( Bloco &);
    int mostrarDurabilidade();
    
    
    
    static int blocosMinerados;
};
#endif // PICARETA_H
