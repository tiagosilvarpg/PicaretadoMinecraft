#ifndef ESPADA_H
#define ESPADA_H
#include <string>
#include "Ferramenta.h"
#include "Monstro.h"
using std::string;

class Espada : public Ferramenta
{
public:
    Espada();
    Espada(const string &);
    Espada(const Espada &);
    ~Espada();

    bool atacar( Monstro &);
    
private:
    static string tipo;
};
#endif // ESPADA_H
