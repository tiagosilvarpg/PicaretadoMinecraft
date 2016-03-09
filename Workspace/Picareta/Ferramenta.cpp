#include "Ferramenta.h"
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::ostream;
using std::endl;
Ferramenta::Ferramenta()
{
    static_cast < Item > (*this) = Item ("Ferramenta");
    material="madeira";
    feitico=0;
    nFeitico=0;
}
Ferramenta::Ferramenta(const Ferramenta & rvalue)
: Item(static_cast<Item>(rvalue))
{
    int i;
    this->material=rvalue.material;
    this->durabilidade=rvalue.durabilidade;
    this->forca=rvalue.forca;
    this->nFeitico=rvalue.nFeitico;
    this->feitico= new Spell*[rvalue.nFeitico];
    
    for (i=0;i<nFeitico;i++)
        this->feitico[i]=new Spell(*rvalue.feitico[i]);
}
Ferramenta::~Ferramenta()
{
    delete (feitico);
}
bool Ferramenta::encantar(const Spell & tipoDeFeitico)
{
    //INCREMENTA VETOR
        int i=0;
        Spell ** AUX =new Spell*[++nFeitico]; //cria um novo vetor
        
        for (i=0;i<nFeitico-1;i++)
            AUX[i]=feitico[i]; // copia o antigo no novo
        
        delete [] feitico; //apaga o antigo
    //
    feitico=AUX; //poe o novo no objeto
    feitico[nFeitico-1]=new Spell(tipoDeFeitico);
    return true;
}
const Ferramenta & Ferramenta::operator=(const Ferramenta & rvalue)
{
    int i;
    static_cast < Item > (*this) = Item (static_cast<Item> (rvalue));
    this->material=rvalue.material;
    this->durabilidade=rvalue.durabilidade;
    this->forca=rvalue.forca;
    this->nFeitico=rvalue.nFeitico;
    this->feitico= new Spell*[rvalue.nFeitico];
    
    for (i=0;i<nFeitico;i++)
        this->feitico[i]=new Spell(*rvalue.feitico[i]);
    return *this;
}
int Ferramenta::initDurabilidade()
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
ostream & operator<<(ostream & output,const Ferramenta & ferramenta)
{
    int i;
    
    output << static_cast<Item>(ferramenta)
           << ferramenta.material
           <<"dur:"
           <<ferramenta.durabilidade;
    
    for ( i=0; i<ferramenta.nFeitico; i++ )
        output<<ferramenta.feitico[i]->getNome()
              <<"("<<ferramenta.feitico[i]->getDuracao()<<")";
              
    output<<endl;
    
    return output;
}
bool Ferramenta::operator==(const Ferramenta & rValue)
{
     
    /*
    this->material !=rvalue.material;
    this->durabilidade=rvalue.durabilidade;
    this->forca=rvalue.forca;
    this->nFeitico=rvalue.nFeitico;
    this->feitico= new Spell*[rvalue.nFeitico];
    int i;
    for (i=0;i<nFeitico;i++)
        this->feitico[i]=new Spell(*rvalue.feitico[i]);*/
    return true;
}