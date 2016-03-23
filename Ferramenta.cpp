#include "Ferramenta.h"
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::ostream;
using std::endl;
Ferramenta::Ferramenta()
{
    
}
Ferramenta::Ferramenta(const Ferramenta & rvalue)
{

}
Ferramenta::~Ferramenta()
{
    unsigned int i;
    for (i=0;i<feitico.size();i++)
    {   delete feitico[i];
    }
}
//OUTROS
bool Ferramenta::encantar(const Spell & tipoDeFeitico)
{
    feitico.push_back(new Spell(tipoDeFeitico));
    return true;
}
bool Ferramenta::remover(Spell & spellTemp)
{ 
  for (unsigned int i=0;i<feitico.size();i++)
        if ((feitico[i])==&(spellTemp))
        {   delete feitico[i];
            feitico.erase(feitico.begin()+i);
        }
    return true;
}
Spell * Ferramenta::hasSpell(const string &nome)
{
   unsigned int i;
   for(i=0;i<feitico.size();i++)
   if (feitico[i]->getNome()==nome)
      return (feitico[i]);
   // retorna um feitico com aquele nome
   return 0;
}   
