#include "Picareta.h"
#include "Bloco.h"
#include <iostream>
#include <string>
#include <conio2.h>

using namespace std;
//estaticos
int Picareta::preco=10;
//Construtores
Picareta::Picareta()
{
    material="madeira";    
    initDurabilidade();
    cout<<"voce ganhou uma picareta de "<<material<<endl;
}
Picareta::Picareta(const string & str)
{
    if (str=="madeira" || str=="pedra" || str=="ferro" || str=="ouro" || str=="diamante")
        material=str;
    else 
    {   cout<<"esse material nao produz picaretas,usando madeira"<<endl;
        material="madeira";
    }
    initDurabilidade();//depois usara um metodo statico para definir o valor
    cout<<"voce ganhou uma picareta de "<<material<<endl;
}
Picareta::Picareta(const Picareta & original)
{
    this.material=original.material;
    this.durabilidade=original.durabilidade;
    this.forca=original.forca;
}

int Picareta::initDurabilidade()
{
     switch (material)
     {
         case ("ouro")
         { durabilidade= 32;
           forca=12;
           return durabilidade;
         }
         case ("madeira")
         { durabilidade= 59;
           forca=4;
           return durabilidade;
         }
         case ("pedra")
         {  durabilidade= 131;
            forca=6;
            return durabilidade;
         }
         case ("ferro") 
         {  durabilidade= 250;
            forca=8;
            return durabilidade;
         }
         case ("diamante")
         { durabilidade= 1561;
           forca=10;
           return durabilidade;
         }
     }

    return durabilidade;                                
}
int Picareta::mostrarDurabilidade()
{
    cout<<"restam "<<durabilidade<<" usos"<<endl;
    return durabilidade;
}
//INTERACAO COM OUTROS OBJETOS
bool Picareta::atacar( Bloco & target )
{
    if (durabilidade==0) 
    {  cout<<"sua picareta esta quebrada";
       return false;
    }
    if (target.damage(forca))
       cout<<"bloco destruido"<<endl;
    return true;
}
bool Picareta::consertar(Picareta & target)
{
    if (material==target.material)
    {
       int temp=durabilidade+target.durabilidade;//soma as durabilidades
       target.durabilidade=0;//destroi a segunda       
       if (temp>initDurabilidade())//checa o limite daquela picareta
          durabilidade=initDurabilidade();       
       return true;                               
    }
    else
    {
        cout<<"picaretas nao compativeis";
        return false;
    }    
}



