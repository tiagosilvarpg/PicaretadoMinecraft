#ifndef FERRAMENTA_H
#define FERRAMENTA_H
#include <string>
#include "Bloco.h"
#include "Spell.h"
using std::string;

class Ferramenta
{
    friend ostream & operator<<(ostream & output,const Ferramenta & ferramenta);
    public:
    Ferramenta();
    Ferramenta(const string &,const string &);
    Ferramenta(const Ferramenta&);
    ~Ferramenta();

    int initDurabilidade();
    bool encantar(const Spell &);
    bool consertar( Ferramenta &);
    Spell* hasSpell(const string &);
    
    protected:
    string material;
    int durabilidade;
    int forca;
    int nFeitico;
    Spell **feitico;
    
};
#endif // PICARETA_H
