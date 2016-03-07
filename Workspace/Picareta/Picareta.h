#ifndef PICARETA_H
#define PICARETA_H
#include <string>
#include "Bloco.h"
#include "Ferramenta.h"
using std::string;

class Picareta : public Ferramenta
{
    friend ostream & operator<<(ostream & ,const Picareta &);
public:
    Picareta();
    Picareta(const string &);
    Picareta(const Picareta &);
    ~Picareta();
    bool atacar( Bloco &);
    //novo
    bool operator==(const Picareta &);
    const Picareta & operator=(const Picareta &);

private:
    static string tipo;
};
#endif // PICARETA_H
