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
    Ferramenta(const Ferramenta &);
    ~Ferramenta();

    bool encantar(const Spell &);    
    Spell* hasSpell(const string &);
    bool remover(Spell &); 
    virtual bool consertar( const Ferramenta &)=0;
protected:
    int durabilidade;
    vector<Spell *>feitico;
    
};
#endif
