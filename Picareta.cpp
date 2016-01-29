#include "Picareta.h"
#include "Bloco.h"
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
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
//METODOS DA CLASSSE
int Picareta::initDurabilidade()
{
     if (material=="ouro")
     { durabilidade= 32;
       forca=12;
     }
     if (material=="madeira")
     { durabilidade= 59;
       forca=4;
     }
     if (material=="pedra")
     {  durabilidade= 131;
        forca=6;
     }
     if (material=="ferro") 
     {  durabilidade= 250;
        forca=8;
     }
     if (material=="diamante")
     { durabilidade= 1561;
       forca=10;
     }                                
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



