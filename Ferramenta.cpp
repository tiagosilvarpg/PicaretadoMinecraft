#include "Ferramenta.h"
bool Ferramenta::encantar(const Spell & tipoDeFeitico)
{
    //INCREMENTA VETOR
        int i=0;
        Spell ** AUX =new Spell*[++nFeitico]; //cria um novo vetor
        
        for (i=0;i<nFeitico-1;i++)
            AUX[i]=feitico[i]; // copia o antigo no novo
        
        delete [] feitico; //apaga o antigo
    //
    feitico=AUX; //poe o novo no objeto
    feitico[nFeitico-1]=new Spell(tipoDeFeitico);
    return true;
}
int Ferramenta::initDurabilidade()
{
    if  (material=="ouro")
         { durabilidade= 32;
           forca=12;
           return durabilidade;
         }
    else if  (material=="madeira")
         { durabilidade= 59;
           forca=4;
           return durabilidade;
         }
    else if  (material=="pedra")
         {  durabilidade= 131;
            forca=6;
            return durabilidade;
         }
    else if  (material=="ferro") 
         {  durabilidade= 250;
            forca=8;
            return durabilidade;
         }
    else if  (material=="diamante")
         { durabilidade= 1561;
           forca=10;
           return durabilidade;
         }
    return durabilidade;                                
}
