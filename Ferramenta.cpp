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
}
//OUTROS
bool Ferramenta::encantar(const Spell & tipoDeFeitico)
{
    feitico.push_back(new Spell(tipoDeFeitico));
    return true;
}
bool Ferramenta::remover(Spell & spellTemp)
{ int i=0;
  for (i=0;i<feitico.size();i++)
  {   if ((feitico[i])==&(spellTemp))
         feitico.erase(feitico.begin()+i);
      }
}
Spell * Ferramenta::hasSpell(const string &nome)
{
   int i;
   for(i=0;i<feitico.size();i++)
   if (feitico[i]->getNome()==nome)
      return (feitico[i]);
   // retorna um feitico com aquele nome
   return 0;
}   
