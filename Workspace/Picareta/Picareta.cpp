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
Picareta::Picareta(const Picareta & original)
{
    int i;
    
    this->material=original.material;
    this->durabilidade=original.durabilidade;
    this->forca=original.forca;
    this->nFeitico=original.nFeitico;
    this->feitico= new Spell*[original.nFeitico];
    
    for (i=0;i<nFeitico;i++)
        this->feitico[i]=new Spell(*original.feitico[i]);
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
const Picareta& Picareta::operator=(const Picareta & toCopy)
{
    this->material=toCopy.material;
    this->forca=toCopy.forca;
    this->nFeitico=toCopy.nFeitico;
    int i;
    delete (feitico);
    feitico=new Spell*[nFeitico];
    for(i=0;i<nFeitico;i++)
        this->feitico[i]=toCopy.feitico[i];
    return *this;
}
bool Picareta::operator==(const Picareta & toCompare)
{
    int i; 
    if (material != toCompare.material) return false;
     if (durabilidade != toCompare.durabilidade) return false;
     if (nFeitico!=toCompare.nFeitico) return false;
     for (i=0;i<nFeitico;i++)
         if (feitico[i]!=toCompare.feitico[i]) return false;
     return true;
        
}

Picareta::~Picareta()
{
}



