#include "Bloco.h"
#include <iostream>
#include<windows.h>
#include <string>
#include <conio2.h>
using namespace std;//BLOCO
Bloco::Bloco(string str)
{
 material=str;
 init(material);
}
Bloco::Bloco()
{
 material="pedra";
 init(material);
}
static void Bloco::limparTudo()
{
    resistencia=0;
}
void Bloco::imprimir()
{
     
    
     
     if (resistencia!=0)
     {
        textcolor(cor);
        cout<<(char)178;//imprime o simbolo 178 da tabela ascii
     }
     else
     {
         textcolor(0);
         cout<<(char)176;//imprime o simbolo 176 da tabela ascii
     }
     textcolor(15);    
}
bool Bloco::damage(int forca)
{
      if (resistencia!=0)
      {
         Sleep(resistencia*200/forca);
         cout<<(resistencia*200/forca)/1000<<"segundos para destruir"<<endl;
         this->init("ar");         
         return true;
      }
      else 
      return false;
           
}   
void Bloco::init(const string & mtr)
{
     if (mtr=="ouro")
     { 
       material=mtr;
       resistencia= 40;
       cor=6;
     }
     if (mtr=="ar")
     { 
       material=mtr;
       resistencia= 0;
       cor=15;
     }
     if (mtr=="pedra")
     { material=mtr;
       resistencia=10;
       cor=8;
     }
     if (mtr=="ferro")
     { material=mtr;
       resistencia= 20;
       cor=12;
     }
     if (mtr=="diamante")
     { material=mtr;
       resistencia= 80;
       cor=9;
     }                                  
}
bool Bloco::isAir()
{
     if (material=="ar")
     return true;
     return false;
}
