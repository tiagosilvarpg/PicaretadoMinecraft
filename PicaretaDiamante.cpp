#include "PicaretaDiamante.h"
#include <iostream>
#include <stdlib.h>
using std::ostream;
//Static
int PicaretaDiamante::durabilidadeMaxima=1561;
int PicaretaDiamante::forca=10;
//CONSTRUTOR
PicaretaDiamante::PicaretaDiamante()
:Picareta()
{
    durabilidade=durabilidadeMaxima;
}
PicaretaDiamante::PicaretaDiamante(const PicaretaDiamante& rValue)
:Picareta(static_cast<Picareta>(rValue))
{
    durabilidade=durabilidadeMaxima;
}



PicaretaDiamante::~PicaretaDiamante()
{
    
}
bool PicaretaDiamante::usar( Bloco & target )
{
    Spell *spellTemp=0;
    if (durabilidade==0) 
    {  std::cout<<"sua picareta esta quebrada";
       return true;
    }
    if (target.damage(forca))
    {
       increaseTotalMinerado();
       spellTemp=Ferramenta::hasSpell("resistente");
       
       if (spellTemp!=0)
       {
          if (spellTemp->usar())
             durabilidade-=rand()%2;
          else
              durabilidade-=1;
       }
       else durabilidade-=1;
    }
    
    return true;
}
//SOBRECARGA
ostream & operator<<(ostream & output,const PicaretaDiamante & rValue)
{
    int i;
    output <<"Picareta de Diamante,"
           <<rValue.durabilidade
           <<"/"
           <<rValue.durabilidadeMaxima
           <<std::endl;
    for ( i=0; i<rValue.feiticoCount; i++ )
    {
        output <<"   spell["
               <<i
               <<"]"
               <<*(rValue.feitico[i])
               <<std::endl;    
    }
    output<<std::endl;
    return output;
}
const PicaretaDiamante& PicaretaDiamante::operator=(const PicaretaDiamante & rValue)
{
    static_cast < Picareta & > (*this) = static_cast<Picareta> (rValue);
    durabilidadeMaxima=rValue.durabilidadeMaxima;
    return *this;
}
bool PicaretaDiamante::operator==(const PicaretaDiamante & rValue)
{
    if (static_cast<Picareta>(*this)==Picareta (static_cast<Picareta>(rValue)))
        return true;
    else 
        return false;
}

