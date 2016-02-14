#include <iostream>
#include <string>
#include "Picareta.h"
#include "Bloco.h"
#include "Mapa.h"
#include <conio2.h>
int main()
{
	string str;
    char op;
    cout<<"insira uma cadeia de blocos (ouro=0,pedra=p,ferro=f,diamante=d,inicio=i)"<<endl;
    cin>>str;
    Mapa  mundo(str);
    cout<<"insira uma material para a picareta (pedra,diamante,ouro,ferro,madeira)"<<endl;
    cin>>str;
    Picareta ferramenta(str);
    ferramenta.mostrarDurabilidade();
    while (op!='x')
    {
    system("cls");
    mundo.refresh();
    cout <<"mover(a,s,d,w),sair(x)="<<endl;
    cout <<"durabilidade=";
    ferramenta.mostrarDurabilidade();
    op=getch();
    if ((op=='d')||(op=='a')||(op=='w')||(op=='s'))
    {
       ferramenta.atacar(mundo.getBloco(op));
       mundo.movePlayer(op);
    }
    } 
	return 0;
}

