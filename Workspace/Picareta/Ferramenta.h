#ifndef FERRAMENTA_H
#define FERRAMENTA_H
#include <string>
#include "Bloco.h"
#include "Spell.h"
#include "Item.h"
using std::string;

class Ferramenta : public Item
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
    const Ferramenta & operator=(const Ferramenta & rvalue);
    bool operator==(const Ferramenta & rvalue);
    bool operator!=(const Ferramenta & rvalue);
    
protected:
    
    string material;
    int durabilidade;
    int forca;
    int nFeitico;
    Spell **feitico;
    
};
#endif // PICARETA_H
