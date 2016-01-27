#include "Picareta.h"
#include <iostream>
#include <string>
using namespace std;
//PICARETA
Picareta::Picareta()
{
    material="madeira";
    forca=1;
    durabilidade=100;
    cout<<"voce ganhou uma picareta de "<<material<<endl;
}
Picareta::Picareta(string str)
{
    if (str=="madeira" || str=="pedra" || str=="ferro" || str=="ouro" || str=="diamante")
    {
    material=str;
    forca=1;
    durabilidade=initDurabilidade(material);//depois usara um metodo statico para definir o valor
    cout<<"voce ganhou uma picareta de "<<material<<endl;
    }
    else 
    { cout<<"esse material nao produz picaretas,usando madeira"<<endl;
      material="madeira";
      forca=1;
      durabilidade=initDurabilidade("madeira");
    }
}
int Picareta::initDurabilidade(string str)
{
 if (str=="ouro") return 32;
 if (str=="madeira") return 59;
 if (str=="pedra")return 131;
 if (str=="ferro") return 250;
 if (str=="diamante")return 1561;                                  
}
int Picareta::mostrarDurabilidade()
{
    cout<<"restam "<<durabilidade<<" usos"<<endl;;
    return durabilidade;
}
bool Picareta::atacar(Bloco target)
{
    if (durabilidade==0) 
    {  cout<<"sua picareta quebrou";
       return false;
    }
    target.damage(forca);
    if (target.getResistencia()<=0)
    {  
       cout<<"destrui o bloco de"<<target.getMaterial()<<endl;       
    }
}
Picareta::~Picareta()
{
}
//BLOCO
Bloco::Bloco(string str)
{
 material=str;
 initResistencia(material);
}
Bloco::Bloco()
{
 material="pedra";
 initResistencia(material);
}
void Bloco::imprimir()
{
     cout<<"["<<getResistencia()<<"]";     
}
float Bloco::getResistencia()
{
 return resistencia;      
}
string Bloco::getMaterial()
{
 return material;      
}
bool Bloco::damage(float number)
{
      resistencia-=1;
      return resistencia;      
}   
int Bloco::initResistencia(string str)
{
     if (str=="ouro") return 40;
     if (str=="pedra")return 10;
     if (str=="ferro") return 20;
     if (str=="diamante")return 80;                                  
}
//MAPA
Mapa::Mapa(string str)
{
 int i,tamanho;
 for (i=0;i<=20;i++)
     grid=new Bloco[20];   
}
void Mapa::refresh()
{int i;
 for (i=0;i<20;i++)
     grid[i].imprimir();
 cout<<endl;
}
Mapa::~Mapa()
{
 delete(grid);
}

