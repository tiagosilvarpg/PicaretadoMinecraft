#include <iostream>
#include <string>
#include "Bloco.h"
#include "Mapa.h"
#include <stdlib.h>
#include "PicaretaDiamante.h"
#include "PicaretaPedra.h"


int main()
{
    Data data(23,03,2016);
    string str;
    char op;
    int selecionada=0;
    
    cout<<"insira uma cadeia de blocos (ouro=0,pedra=p,ferro=f,diamante=d,inicio=i)"<<endl;
    cin>>str;
    Mapa  mundo(str,data);
    vector<Ferramenta*>ferramentas;
    ferramentas.push_back(new PicaretaDiamante);
    ferramentas.push_back(new PicaretaDiamante(*(dynamic_cast<PicaretaDiamante *>(ferramentas[0]) ) ));
    ferramentas.push_back(new PicaretaPedra);

    while (op!='x')
    {
    system("cls");
    mundo.refresh();
    cout<<ferramentas[selecionada];
    cout <<"mover(a,s,d,w),encantar(e),sair(x)="; 
    cin>>op;
    //op=getch();
    if ((op=='d')||(op=='a')||(op=='w')||(op=='s'))
    {
       
       dynamic_cast<Picareta*>(ferramentas[selecionada])->usar(mundo.getBloco(op));
       mundo.movePlayer(op);
    }
    if ((op=='1')||(op=='2')||(op=='3'))
    {
       selecionada=op - '0';
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
        dynamic_cast<Picareta*>(ferramentas[selecionada])->encantar(spellTemp);
       cout<<"picareta encantada"<<endl;
       system("pause"); 
       }
    }

     for (unsigned int i =0; i<ferramentas.size(); i++)
         delete ferramentas[i];

	return 0;
}

