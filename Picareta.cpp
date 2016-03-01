#include "Picareta.h"
#include "Bloco.h"
#include "Spell.h"
#include <iostream>
#include <string>
#include <stdlib.h>
//#include <conio2.h>

using std::string;
using std::ostream;
//estaticos
string Picareta::tipo="picareta";
//Construtores
Picareta::Picareta()
{
    material="madeira";
    feitico=0;
    nFeitico=0;
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


ostream & operator<<(ostream & output,const Picareta & picareta)
{
    int i;
    output<<"picareta de "<<picareta.getMaterial<<"dur:"<<picareta.getDurabilidade;
    for (i=0;i<picareta.nFeitico;i++)
        output<<picareta.feitico[i]->getNome()<<"("<<picareta.feitico[i]->getDuracao()<<")";
    output<<endl;
    
    return output;
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
Spell* Picareta::hasSpell(const string & nome)
{
    int i;
    for (i=0;i<nFeitico;i++)
    {
        if ((feitico[i]->getNome())==nome)
           if (feitico[i]->getDuracao()>0)
            return (feitico[i]);
    }
    return 0;
    }
bool Picareta::consertar(Picareta & target)
{
    if (material==target.material)
    {
       int temp=durabilidade+target.durabilidade;//soma as durabilidades
       target.durabilidade=0;//destroi a segunda       
       if (temp>initDurabilidade())//checa o limite daquela picareta
          durabilidade=initDurabilidade();       
       return true;                               
    }
    else
    {
        cout<<"picaretas nao compativeis";
        return false;
    }    
}
Picareta::~Picareta()
{
    delete[] feitico;
}



