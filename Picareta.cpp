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
int Picareta::totalMinerado=0;
//Construtores
Picareta::Picareta()
{
}
Picareta::Picareta(const Picareta & rValue)
{
    durabilidade=rValue.durabilidade;
    feiticoCount=rValue.feiticoCount;
    //
}
bool Picareta::encantar(const Spell & tipoDeFeitico)
{
    feitico.push_back(new Spell(tipoDeFeitico));
    return true;
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
const Picareta& Picareta::operator=(const Picareta & rValue)
{
    (*this).durabilidade=rValue.durabilidade;
    (*this).feitico=rValue.feitico;
    return *this;
}
bool Picareta::consertar(const Ferramenta & rValue) 
{
    if (*this).durabilidade+=rValue.durabilidade;
}
Picareta::~Picareta()
{
}
void Picareta::increaseTotalMinerado()
{
       totalMinerado++;
}



