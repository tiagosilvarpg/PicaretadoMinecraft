#include "Picareta.h"
#include "Bloco.h"
#include "Spell.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Ferramenta.h"

using std::string;
using std::ostream;
using std::endl;
using std::cout;
//estaticos
string Picareta::tipo="picareta";
//Construtores
Picareta::Picareta()
{
    initDurabilidade();
}
Picareta::Picareta(const string & str)
{
    feitico=0;
    nFeitico=0;
    if (str=="madeira" || str=="pedra" || str=="ferro" || str=="ouro" || str=="diamante")
        material=str;
    else 
    {   
        material="madeira";
    }
    initDurabilidade();//depois usara um metodo statico para definir o valor
}
Picareta::Picareta(const Picareta & rValue)
{
    static_cast < Ferramenta > (*this) = Ferramenta (static_cast<Ferramenta> (rValue));
}

//INTERACAO COM OUTROS OBJETOS
bool Picareta::atacar( Bloco & target )
{
    Spell *spellTemp=0;
    if (durabilidade==0) 
    {  cout<<"sua picareta esta quebrada";
       return true;
    }
    if (target.damage(forca))
    {
       //spellTemp=Ferramenta::hasSpell("resistente");
       
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

//FRIENDS
ostream & operator<<(ostream & output,const Picareta & picareta)
{
    output<<"picareta de "<<static_cast<Ferramenta>(picareta);    
    
    return output;
}
bool Picareta::operator==(const Picareta & rValue)
{
    if (static_cast<Ferramenta>(*this)!=Ferramenta (static_cast<Ferramenta>(rValue)))
        return false;
    if(tipo!=rValue.tipo)
        return false;
    return true;
}
bool Picareta::operator!=(const Picareta & rValue)
{
    return !(*this==rValue);
        
}
const Picareta& Picareta::operator=(const Picareta & rValue)
{
    static_cast < Ferramenta > (*this) = Ferramenta (static_cast<Ferramenta> (rValue));
    return *this;
} 
Picareta::~Picareta()
{
}



