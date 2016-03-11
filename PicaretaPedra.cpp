#include "PicaretaPedra.h"
#include <iostream>
using std::ostream;
//Static
int PicaretaPedra::durabilidadeMaxima=131;
int PicaretaPedra::forca=6;
//CONSTRUTOR
PicaretaPedra::PicaretaPedra()
:Picareta()
{
    durabilidade=durabilidadeMaxima;
}

PicaretaPedra::~PicaretaPedra()
{
    
}
bool PicaretaPedra::usar( Bloco & target )
{
    Spell *spellTemp=0;
    if (durabilidade==0) 
    {  std::cout<<"sua picareta esta quebrada";
       return true;
    }
    if (target.damage(forca))
    {
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
ostream & operator<<(ostream & output,const PicaretaPedra & rValue)
{
    output <<"Picareta de diamante,"
           <<rValue.durabilidade
           <<"/"
           <<rValue.durabilidadeMaxima
           <<static_cast<Picareta>(rValue);
    return output;
}
const PicaretaPedra& PicaretaPedra::operator=(const PicaretaPedra & rValue)
{
    static_cast < Picareta > (*this) = PicaretaPedra (static_cast<PicaretaPedra> (rValue));
    durabilidadeMaxima=rValue.durabilidadeMaxima;
    return *this;
}
bool PicaretaPedra::operator==(const PicaretaPedra & rValue)
{
    if (static_cast<Picareta>(*this)==Picareta (static_cast<Picareta>(rValue)))
        return true;
    else 
        return false;
}

