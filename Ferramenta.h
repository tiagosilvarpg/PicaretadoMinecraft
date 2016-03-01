#ifndef FERRAMENTA_H
#define FERRAMENTA_H
#include <string>
#include "Bloco.h"
#include "Spell.h"
using std::string;

class Ferramenta
{
   
    public:
    Ferramenta();
    Ferramenta(const string &,const string &);
    Ferramenta(const Ferramenta&);
    ~Ferramenta();

    int initDurabilidade();
    bool encantar(const Spell &);
    bool consertar( Ferramenta &);
    Spell* hasSpell(const string &);
    string getMaterial(){return material;}
    int getDurabilidade(){return durabilidade;}
    
    public:
    string material;
    int durabilidade;
    int forca;
    int nFeitico;
    Spell **feitico;
    
};
#endif // PICARETA_H
