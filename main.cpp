#include <iostream>
#include <string>
#include "Bloco.h"
#include "Mapa.h"
#include <stdlib.h>
#include "PicaretaDiamante.h"


int main()
{
    Data data(11,03,2016);
    string str;
    char op;
    
    cout<<"insira uma cadeia de blocos (ouro=0,pedra=p,ferro=f,diamante=d,inicio=i)"<<endl;
    cin>>str;
    Mapa  mundo(str,data);
    PicaretaDiamante tool3,tool2(tool3);
    PicaretaDiamante tool;//=tool2;//,tool=tool2;
    while (op!='x')
    {
    system("cls");
    mundo.refresh();
    cout<<tool;
    cout <<"mover(a,s,d,w),encantar(e),sair(x)="; 
    cin>>op;
    //op=getch();
    if ((op=='d')||(op=='a')||(op=='w')||(op=='s'))
    {
       tool.usar(mundo.getBloco(op));
       mundo.movePlayer(op);
    }
    if (op=='t')
        {   
            int temp;
            cin>>temp;
            Mapa::changeMapSize(temp);
        }
    if (op=='e')
       {
       Spell spellTemp;
       tool.encantar(spellTemp);
       cout<<"picareta encantada"<<endl;
       system("pause"); 
       }
    } 
	return 0;
}

