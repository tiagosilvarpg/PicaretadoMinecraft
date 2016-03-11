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
    bool usar( Bloco & target );
private:
    static int durabilidadeMaxima;
    static int forca;
    

};

#endif // PICARETAPEDRA_H
