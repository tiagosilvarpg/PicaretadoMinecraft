#include "Picareta.h"
#include "Bloco.h"
#include "Spell.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <typeinfo>
#include "Ferramenta.h"

using std::string;
using std::ostream;
using std::endl;
using std::cout;
//estaticos
int Picareta::totalMinerado=0;
//Construtores

Picareta::Picareta()
{
}
Picareta::Picareta(const Picareta & rValue)
{
    durabilidade=rValue.durabilidade;
}
//OUTROS
bool Picareta::consertar( const Ferramenta & rValue) 
{
    if (typeid(*this).name()==typeid(rValue).name())
    {
        durabilidade+=rValue.durabilidade;
        return true;
    }
    return false;
    
}
//FRIENDS
ostream & operator<<(ostream & output,const Picareta & picareta)
{
    return output;
}
bool Picareta::operator==(const Picareta & rValue)
{
    if (durabilidade!=rValue.durabilidade)
        if (feitico!=feitico)
            return false;
    return true;
}
bool Picareta::operator!=(const Picareta & rValue)
{
    return !(*this==rValue);
        
}
bool Picareta::usar( Bloco & target )
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
          {   cout<<*spellTemp<<" expirou"<<std::endl;
              remover(*spellTemp);
              system("pause");
              durabilidade-=1;
          }
       }
       else durabilidade-=1;
    }
    
    return true;
}
const Picareta& Picareta::operator=(const Picareta & rValue)
{
    (*this).durabilidade=rValue.durabilidade;
    (*this).feitico=rValue.feitico;
    return *this;
}
//destrutor
Picareta::~Picareta()
{
}
//STATIC
void Picareta::increaseTotalMinerado()
{
       totalMinerado++;
}



