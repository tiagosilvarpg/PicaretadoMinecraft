#include "Picareta.h"
#include "Bloco.h"
#include "Spell.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <typeinfo>
#include "Ferramenta.h"

using std::string;
using std::ostream;
using std::endl;
using std::cout;
//estaticos
int Picareta::totalMinerado=0;
//Construtores

Picareta::Picareta()
{
}
Picareta::Picareta(const Picareta & rValue)
{
    durabilidade=rValue.durabilidade;
}
//FRIENDS
ostream & operator<<(ostream & output,const Picareta & picareta)
{
    return output;
}
bool Picareta::operator==(const Picareta & rValue)
{
    if (durabilidade!=rValue.durabilidade)
        if (feitico!=feitico)
            return false;
    return true;
}
bool Picareta::operator!=(const Picareta & rValue)
{
    return !(*this==rValue);
        
}
bool Picareta::usar( Bloco & target )
{
    minerar(target);
}
const Picareta& Picareta::operator=(const Picareta & rValue)
{
    (*this).durabilidade=rValue.durabilidade;
    (*this).feitico=rValue.feitico;
    return *this;
}
//destrutor
Picareta::~Picareta()
{
}
//STATIC
void Picareta::increaseTotalMinerado()
{
       totalMinerado++;
}



