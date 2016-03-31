#ifndef PICARETAPEDRA_H
#define PICARETAPEDRA_H
#include "Picareta.h"

class PicaretaPedra : public Picareta
{
    friend ostream & operator<<(ostream & output,const PicaretaPedra & rValue);
public:
    PicaretaPedra();
    PicaretaPedra(const PicaretaPedra &);
    ~PicaretaPedra();
    const PicaretaPedra& operator=(const PicaretaPedra & rValue);
    bool operator==(const PicaretaPedra & rValue);
    void exibir();
    bool consertar(  Ferramenta &);
private:
    static int durabilidadeMaxima;
    static int forcaBase;
    

};

#endif // PICARETAPEDRA_H
