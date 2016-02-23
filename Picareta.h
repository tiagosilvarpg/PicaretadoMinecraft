#ifndef PICARETA_H
#define PICARETA_H
#include <string>
#include "Bloco.h"
#include "Spell.h"
using namespace std;

class Picareta
{
    public:
    Picareta();
    Picareta(const string &);
    Picareta(const Picareta &);
    ~Picareta();

    int initDurabilidade();//define a durabilidade dependendo do tipo,retorna o valor maximo
    bool atacar( Bloco &);
    bool encantar(const Spell &);
    bool consertar( Picareta &);
    Spell* hasSpell(const string &);
    int mostrarDurabilidade();
    
    private:
    string material;
    int durabilidade;
    int forca;
    int nfeitico;
    Spell **feitico;
    
    static int preco;
};
#endif // PICARETA_H
