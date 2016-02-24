#include "Picareta.h"
#include "Bloco.h"
#include "Spell.h"
#include <iostream>
#include <string>
#include <stdlib.h>
//#include <conio2.h>

using namespace std;
//estaticos
int Picareta::preco=10;
//Construtores
Picareta::Picareta()
{
    material="madeira";
    feitico=0;
    nfeitico=0;    
    initDurabilidade();
    cout<<"voce ganhou uma picareta de "<<material<<endl;
}
Picareta::Picareta(const string & str)
{
    feitico=0;
    nfeitico=0;
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
    this->feitico= new Spell*[original.nfeitico];
    for (i=0;i<nfeitico;i++)
        this->feitico[i]=new Spell(*original.feitico[i]);
    this->material=original.material;
    this->durabilidade=original.durabilidade;
    this->forca=original.forca;
    this->nfeitico=original.nfeitico;
}
bool Picareta::encantar(const Spell & tipoDeFeitico)
{
    //INCREMENTA VETOR
        int i=0;
        Spell ** AUX =new Spell*[++nfeitico]; //cria um novo vetor
        
        for (i=0;i<nfeitico-1;i++)
            AUX[i]=feitico[i]; // copia o antigo no novo
        
        delete [] feitico; //apaga o antigo
    //
    feitico=AUX; //poe o novo no objeto
    feitico[nfeitico-1]=new Spell(tipoDeFeitico);
    return true;
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
int Picareta::mostrarDurabilidade()
{
    cout<<"restam "<<durabilidade<<" usos"<<endl;
    int i;
    for (i=0;i<nfeitico;i++)
    cout<<feitico[i]->getNome()<<"("<<feitico[i]->getDuracao()<<")";
    cout<<endl;
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
Spell* Picareta::hasSpell(const string & nome)
{
    int i;
    for (i=0;i<nfeitico;i++)
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



