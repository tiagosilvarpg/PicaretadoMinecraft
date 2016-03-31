#include "PicaretaDiamante.h"
#include <iostream>
using std::ostream;
using std::endl;
using std::cout; 
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
bool PicaretaDiamante::consertar( Ferramenta & rValue)
{    
    PicaretaDiamante* temp=dynamic_cast<PicaretaDiamante*>(&rValue);
    if (temp!=0)
    {
        this->durabilidade+=temp->durabilidade;
        if (this->durabilidade>this->durabilidadeMaxima)
           this->durabilidade=this->durabilidadeMaxima ;
        temp->durabilidade=0;
    }
    else cout<<"precisa de uma picareta de diamante para isso";
    
}
bool PicaretaDiamante::minerar(Bloco & target)
{
    Spell *spellTemp=0;
    if (durabilidade==0) 
    {  std::cout<<"sua picareta esta quebrada";
       return true;
    }
    if (target.getResistencia()<=80)//se for abaixo ou igual a diamante
    {
       if (target.damage(forca))
        {
           increaseTotalMinerado();
           spellTemp=Ferramenta::hasSpell("resistente");
           
           if (spellTemp!=0)
           {
              if (spellTemp->usar())
                 durabilidade-=rand()%2;
              else
              {   cout<<*spellTemp<<" expirou"<<std::endl;
                  remover(*spellTemp);
                  system("pause");
                  durabilidade-=1;
              }
           }
           else durabilidade-=1;
        }
    }
    else cout<<"essa picareta é muito fraca pra isso"<<std::endl;    
    return true;
}
