#ifndef FERRAMENTA_H
#define FERRAMENTA_H
#include <string>
#include "Bloco.h"
#include "Spell.h"
#include <vector>
using std::string;
using std::vector;

class Ferramenta
{
public:
    Ferramenta();
    Ferramenta(const string &,const string &);
    Ferramenta(const Ferramenta&);
    ~Ferramenta();

    virtual bool encantar(const Spell &)=0;
    virtual bool consertar( Ferramenta &)=0;
    Spell* hasSpell(const string &);
    //sobrecarga

protected:
    int durabilidade;
    int feiticoCount;
    vector<Spell *>feitico;
    
};
#endif // PICARETA_H
