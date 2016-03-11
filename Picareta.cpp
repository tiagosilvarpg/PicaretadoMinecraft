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
    static_cast < Ferramenta > (*this) = Ferramenta (static_cast<Ferramenta> (rValue));
}

//FRIENDS
ostream & operator<<(ostream & output,const Picareta & picareta)
{
    output<<static_cast<Ferramenta>(picareta);    
    
    return output;
}
bool Picareta::operator==(const Picareta & rValue)
{
    if (!(static_cast<Ferramenta>(*this)==Ferramenta (static_cast<Ferramenta>(rValue))))
        return false;
    return true;
}
bool Picareta::operator!=(const Picareta & rValue)
{
    return !(*this==rValue);
        
}
const Picareta& Picareta::operator=(const Picareta & rValue)
{
    static_cast < Ferramenta & > (*this) = static_cast<Ferramenta> (rValue);
    return *this;
} 
Picareta::~Picareta()
{
}
void Picareta::increaseTotalMinerado()
{
       totalMinerado++;
}



