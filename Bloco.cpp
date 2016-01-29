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
void Bloco::imprimir()
{
     
    
     textcolor(cor);
     if (resistencia==0)
        cout<<"__";
     else
         cout<<"[]";
     textcolor(15);    
}
bool Bloco::damage(int forca)
{
      if (resistencia!=0)
      {
         cout<<"minerando..."<<endl;
         Sleep(resistencia*1000/forca);
         cout<<(resistencia*1000/forca)/1000<<"segundos para destruir"<<endl;
         resistencia=0;
         return true;
      }
      else 
      {
           cout<<"espaco vazio"<<endl;
           return false;
       }
           
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
