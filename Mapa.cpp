#include <iostream>
#include <string>
//#include <conio2.h>
#include "Mapa.h"
#include "Bloco.h"
//MAPA
int Mapa::size=20;
void Mapa::changeMapSize( int temp)
{
    if (temp>8 && temp<40)
    size=temp;
}

Mapa::Mapa(const string & str,const Data & data )
:creationTime(data)
{
int i,j,letra;
 //inicializar
 playerX=0;
 playerY=0;
 //alocacao dinamica
 grid=new Bloco*[size];
 for (i=0;i<size;i++)
     grid[i]=new Bloco[size];
 letra=0; 
 for (j=0;j<size;j++)
      for (i=0;i<size;i++)
      if ((unsigned int)letra<str.length())
         {   
             if (str[letra]=='f')
                grid[i][j].init("ferro");
             else if (str[letra]=='o')
                  grid[i][j].init("ouro");
             else if (str[letra]=='d')
                  grid[i][j].init("diamante");
             else if (str[letra]=='i')
                 {
                 grid[i][j].init("ar");//se houver mais de um i todos seram vazio mas o ultimo sera o inicio
                 playerX=i;
                 playerY=j;
                 }
             else 
                  grid[i][j].init("pedra");
             letra++;     
         }
 grid[playerX][playerY].init("ar");//garante que nao haja bloco no inicio caso ele nao seja especificado; 
}
Mapa::Mapa(const Data & data )
:creationTime(data)
{
 int i,j;
 grid=new Bloco*[size];
 for (i=0;i<size;i++)
     grid[i]=new Bloco[size];
     
 for (j=1;j<size;j++)
     for (i=1;i<size;i++)
     grid[i][j].init("pedra");
 grid[0][0].init("ar");
 playerX=0;
 playerY=0;
}
void Mapa::refresh()
{int i,j;
 for (j=0;j<size;j++)
 {
     for (i=0;i<size;i++)
     {    if (i==playerX && j==playerY)
          {
             //textcolor(15);
             cout<<'\2';
             //textcolor(15);
          }
          else grid[i][j].imprimir();
          
     }
     cout<<endl;
 }
 cout<<endl;
}
Bloco& Mapa::getBloco(char op)
{
      int x,y;
      switch (op)
      {
      case 'a':
           {
           y=playerY;
           x=playerX-1;    
           break;
           }
      case 's':
           {
           y=playerY+1;
           x=playerX;              
           break;
           }
      case 'd':
           {
           y=playerY;
           x=playerX+1;    
           break;
           }
      case 'w':
           {
           y=playerY-1;
           x=playerX;     
           break;
           }
      }
      if (x>=size || x<0 || y<0 ||y>=size)
      {
       return grid[playerX][playerY];//retorna a atual se a nova nao for valida
      }
      else
      {
      return (grid[x][y]);//retorna a nova
      }   
}
void Mapa::movePlayer(char op)
{
      int x,y;
      switch (op)
      {
      case 'a':
           {
           y=playerY;
           x=playerX-1;    
           break;
           }
      case 's':
           {
           y=playerY+1;
           x=playerX;              
           break;
           }
      case 'd':
           {
           y=playerY;
           x=playerX+1;    
           break;
           }
      case 'w':
           {
           y=playerY-1;
           x=playerX;     
           break;
           }
      }
      if (x<size && x>=0 && y>=0 && y<size)
      {
         if (grid[x][y].isAir())
          { 
              playerY=y;
              playerX=x;
          }
          
      }
      
}
Mapa::~Mapa()
{
 int i;
 for (i=0;i<size;i++)
 delete[] grid[i];

 //delete[] grid;
 //delete[][] grid;
}
int Mapa::getPlayerX()
{
return playerX;
}
int Mapa::getPlayerY()
{
return playerY;
}
