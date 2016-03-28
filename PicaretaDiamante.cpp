#include "PicaretaDiamante.h"
#include <iostream>
using std::ostream;
using std::endl;
//Static
int PicaretaDiamante::durabilidadeMaxima=1561;
int PicaretaDiamante::forcaBase=10;
//CONSTRUTOR
PicaretaDiamante::PicaretaDiamante()
:Picareta()
{
    durabilidade=durabilidadeMaxima;
    forca=forcaBase;
}
PicaretaDiamante::PicaretaDiamante(const PicaretaDiamante& rValue)
{
    durabilidade=rValue.durabilidade;
    forca=rValue.forca;
}
PicaretaDiamante::~PicaretaDiamante()
{
    
}
//OUTROS

//SOBRECARGA
ostream & operator<<(ostream & output,const PicaretaDiamante & rValue)
{
    unsigned int i;
    output <<"Picareta de Diamante,"
           <<rValue.durabilidade
           <<"/"
           <<rValue.durabilidadeMaxima
           <<std::endl;
    
    for ( i=0; i<rValue.feitico.size(); i++ )
    {
        output <<"   spell["
               <<i
               <<"]="
               <<*rValue.feitico[i];  
    }
    output<<endl;
    return output;
}
const PicaretaDiamante& PicaretaDiamante::operator=(const PicaretaDiamante & rValue)
{
     durabilidade=rValue.durabilidade;
    forca=rValue.forca;
}
bool PicaretaDiamante::operator==(const PicaretaDiamante & rValue)
{
    if (durabilidadeMaxima==rValue.durabilidadeMaxima)   
       if (durabilidade==rValue.durabilidade)
          if (feitico==rValue.feitico)          
             return true;
    return false;
}
void PicaretaDiamante::exibir()
{    std::cout<<*this;
}

