#ifndef PICARETA_H
#define PICARETA_H
#include <string>
#include "Bloco.h"
#include "Ferramenta.h"
using std::string;

class Picareta : public Ferramenta
{
public:
    Picareta();
    Picareta(const string &);
    Picareta(const Picareta &);
    ~Picareta();
    bool atacar( Bloco &);

private:
    static string tipo;
};
#endif // PICARETA_H
