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
    this->durabilidade=rvalue.durabilidade;
    cout<<rvalue.durabilidade;
    this->feitico=rvalue.feitico;
    
    for (int i=0;i<feiticoCount;i++)
        this->feitico[i]=new Spell(*rvalue.feitico[i]);
}
Ferramenta::~Ferramenta()
{
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
