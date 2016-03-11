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
    bool usar( Bloco & target );
    //sobrecarga
    const PicaretaDiamante& operator=(const PicaretaDiamante & rValue);
    bool operator==(const PicaretaDiamante & rValue);
    
private:
    static int durabilidadeMaxima;
    static int forca;

};

#endif // PICARETADIAMANTE_H
