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
    
    virtual ~Ferramenta();
    
    Spell* hasSpell(const string &);
    bool encantar(const Spell &);    
    bool remover(Spell &);
    
    virtual bool usar( Bloco & target )=0; 
    virtual bool consertar( const Ferramenta &)=0;
    virtual void exibir()=0;
public:
    int durabilidade;
    vector<Spell *>feitico;
    
};
#endif
