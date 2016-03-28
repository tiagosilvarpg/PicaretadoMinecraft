#include "PicaretaPedra.h"
#include <iostream>
using std::ostream;
using std::endl;
//Static
int PicaretaPedra::durabilidadeMaxima=131;
int PicaretaPedra::forcaBase=6;
//CONSTRUTOR
PicaretaPedra::PicaretaPedra()
:Picareta()
{
    durabilidade=durabilidadeMaxima;
    forca=forcaBase;
}
PicaretaPedra::PicaretaPedra(const PicaretaPedra& rValue)
{
    durabilidade=durabilidadeMaxima;
}



PicaretaPedra::~PicaretaPedra()
{
    
}

//SOBRECARGA
ostream & operator<<(ostream & output,const PicaretaPedra & rValue)
{
    output <<"Picareta de pedra,"
           <<rValue.durabilidade
           <<"/"
           <<rValue.durabilidadeMaxima
           <<std::endl;
    
    for ( unsigned int i=0; i<rValue.feitico.size(); i++ )
    {
        output <<"   spell["
               <<i
               <<"]="
               <<*rValue.feitico[i];
    }
    output<<endl;
    return output;
}
const PicaretaPedra& PicaretaPedra::operator=(const PicaretaPedra & rValue)
{
    durabilidadeMaxima=rValue.durabilidadeMaxima;
    return *this;
}
bool PicaretaPedra::operator==(const PicaretaPedra & rValue)
{
    if (durabilidadeMaxima==rValue.durabilidadeMaxima)   
       if (durabilidade==rValue.durabilidade)
          if (feitico==rValue.feitico)          
             return true;
    return false;
}
void PicaretaPedra::exibir()
{    std::cout<<*this; 
}
