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
PicaretaPedra::PicaretaPedra(const PicaretaPedra& rValue)
:Picareta(static_cast<Picareta>(rValue))
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
       increaseTotalMinerado();
       spellTemp=Ferramenta::hasSpell("resistente");
       
       if (spellTemp!=0)
       {
          if (spellTemp->usar())
             durabilidade-=1;//rand()%2;
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
    int i;
    output <<"Picareta de pedra,"
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
const PicaretaPedra& PicaretaPedra::operator=(const PicaretaPedra & rValue)
{
    static_cast < Picareta & > (*this) = static_cast<Picareta> (rValue);
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

