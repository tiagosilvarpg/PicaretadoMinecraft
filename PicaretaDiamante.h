#ifndef PICARETADIAMANTE_H
#define PICARETADIAMANTE_H
#include "Picareta.h"

class PicaretaDiamante : public Picareta
{
    friend ostream & operator<<(ostream & output,const PicaretaDiamante & rValue);
public:
    PicaretaDiamante();
    PicaretaDiamante(const PicaretaDiamante &);
    
    ~PicaretaDiamante();    
    
    void exibir();
    bool consertar(  Ferramenta &);
    bool minerar( Bloco & target);
    const PicaretaDiamante& operator=(const PicaretaDiamante & rValue);
    bool operator==(const PicaretaDiamante & rValue);
    
    
private:
    static int durabilidadeMaxima;
    static int forcaBase;

};

#endif // PICARETADIAMANTE_H
