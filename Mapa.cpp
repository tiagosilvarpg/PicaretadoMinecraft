#include <iostream>
#include <string>
#include <conio.h>
#include "Mapa.h"
#include "Bloco.h"
//MAPA
Mapa::Mapa(const string & str)
{
 int i;
 playerX=0;
 tamanho=str.length();
 if (tamanho>=20) tamanho=20;
 grid=new Bloco[tamanho];
 grid[0].init("ar");
 for (i=0;i<tamanho;i++)
 {   
     if (str[i]=='f')
        grid[i].init("ferro");
     else if (str[i]=='o')
             grid[i].init("ouro");
     else if (str[i]=='d')
             grid[i].init("diamante");
     else if (str[i]=='i')
             {
             grid[i].init("ar");//se houver mais de um i todos seram vazio mas o ultimo sera o inicio
             playerX=i;
             }
     else 
          grid[i].init("pedra");     
 }
 grid[playerX].init("ar");//garante que nao haja bloco no inicio caso ele nao seja especificado; 
}
Mapa::Mapa()
{
 int i;
 tamanho=20;
 grid=new Bloco[20];
 for (i=1;i<20;i++)
     grid[i].init("pedra");
 grid[0].init("ar");
 playerX=0;
}
void Mapa::refresh()
{int i;
 for (i=0;i<tamanho;i++)
 {    if (i!=playerX)grid[i].imprimir();
      else cout<<"()";
 }
 cout<<endl;
}
Bloco& Mapa::bloco(int n)
{
      
      if (playerX+n>=tamanho || playerX+n<0)
      {
       cout<<"fora do mapa"<<endl;
       return grid[playerX];
      }
      else
      {
      playerX+=n;
      return (grid[playerX]);
      }
      
}
Mapa::~Mapa()
{
 delete[](grid);
}
