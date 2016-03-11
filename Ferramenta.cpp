#include "Ferramenta.h"
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::ostream;
using std::endl;
Ferramenta::Ferramenta()
{
    feitico=0;
    feiticoCount=0;
}
Ferramenta::Ferramenta(const Ferramenta & rvalue)
{
    this->durabilidade=rvalue.durabilidade;
    this->forca=rvalue.forca;
    this->feiticoCount=rvalue.feiticoCount;
    this->feitico= new Spell*[rvalue.feiticoCount];
    
    for (int i=0;i<feiticoCount;i++)
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
        Spell ** AUX =new Spell*[++feiticoCount]; //cria um novo vetor
        
        for (i=0;i<feiticoCount-1;i++)
            AUX[i]=feitico[i]; // copia o antigo no novo
        
        delete [] feitico; //apaga o antigo
    //
    feitico=AUX; //poe o novo no objeto
    feitico[feiticoCount-1]=new Spell(tipoDeFeitico);
    return true;
}
const Ferramenta & Ferramenta::operator=(const Ferramenta & rvalue)
{
    int i;
    this->durabilidade=rvalue.durabilidade;
    this->forca=rvalue.forca;
    this->feiticoCount=rvalue.feiticoCount;
    this->feitico= new Spell*[rvalue.feiticoCount];
    
    for (i=0;i<feiticoCount;i++)
        this->feitico[i]=new Spell(*rvalue.feitico[i]);
    return *this;
}

ostream & operator<<(ostream & output,const Ferramenta & ferramenta)
{  
    return output;
}
bool Ferramenta::operator==(const Ferramenta & rValue)
{
    int i;
    if (this->durabilidade==rValue.durabilidade)
       if (this->forca==rValue.forca)
          if (this->feiticoCount==rValue.feiticoCount)
          {
             for (i=0;i<feiticoCount;i++)
             {
              if (!(this->feitico[i]==rValue.feitico[i]))
              return false;
             }
             return true;
          }
    return false;
}
Spell * Ferramenta::hasSpell(const string &nome)
{
      int i;
    for (i=0;i<feiticoCount;i++)
    {
        if ((feitico[i]->getNome())==nome)
           if (feitico[i]->getDuracao()>0)
              return (feitico[i]);
    }
   return 0;
}   
