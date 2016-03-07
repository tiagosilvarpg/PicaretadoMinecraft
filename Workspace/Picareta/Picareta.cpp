#include "Picareta.h"
#include "Bloco.h"
#include "Spell.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using std::string;
using std::cout;
using std::endl;
//estaticos
int Picareta::blocosMinerados=10;
//Construtores
Picareta::Picareta()
{
    material="madeira";
    tipo="picareta";
    feitico=0;
    nFeitico=0;    
    initDurabilidade();
    cout<<"voce ganhou uma picareta de "<<material<<endl;
}
Picareta::~Picareta()
{
    delete[] feitico;
}
Picareta::Picareta(const string & str)
{
    feitico=0;
    nFeitico=0;
    if (str=="madeira" || str=="pedra" || str=="ferro" || str=="ouro" || str=="diamante")
        material=str;
    else 
    {   cout<<"esse material nao produz picaretas,usando madeira"<<endl;
        material="madeira";
    }
    initDurabilidade();//depois usara um metodo statico para definir o valor
    cout<<"voce ganhou uma picareta de "<<material<<endl;
}
Picareta::Picareta(const Picareta & original)
{
    int i;
    this->feitico= new Spell*[original.nFeitico];
    for (i=0;i<nFeitico;i++)
        this->feitico[i]=new Spell(*original.feitico[i]);
    this->material=original.material;
    this->durabilidade=original.durabilidade;
    this->forca=original.forca;
    this->nFeitico=original.nFeitico;
}
int Picareta::initDurabilidade()
{
    if  (material=="ouro")
         { durabilidade= 32;
           forca=12;
           return durabilidade;
         }
    else if  (material=="madeira")
         { durabilidade= 59;
           forca=4;
           return durabilidade;
         }
    else if  (material=="pedra")
         {  durabilidade= 131;
            forca=6;
            return durabilidade;
         }
    else if  (material=="ferro") 
         {  durabilidade= 250;
            forca=8;
            return durabilidade;
         }
    else if  (material=="diamante")
         { durabilidade= 1561;
           forca=10;
           return durabilidade;
         }
    return durabilidade;                                
}

//INTERACAO COM OUTROS OBJETOS
bool Picareta::atacar( Bloco & target )
{
    if (durabilidade==0) 
    {  cout<<"sua picareta esta quebrada";
       return true;
    }
    if (target.damage(forca))
    {
       Spell *spellTemp=hasSpell("resistente");
       
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

ostream & operator<<(ostream & output,Picareta & picareta)
{
    output<<"restam "<<picareta.getDurabilidade()<<" usos"<<endl;
    int i;
    for (i=0;i<picareta.nFeitico;i++)
    output<<picareta.feitico[i]->getNome()<<"("<<picareta.feitico[i]->getDuracao()<<")";
    output<<endl;
    return output;
}

