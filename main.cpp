#include <iostream>
#include <string>
#include "Picareta.h"
#include "Bloco.h"
#include "Mapa.h"
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
    cout<<"=escolha uma acao="<<endl;
    cout<<"d-atacar direito"<<endl;
    cout<<"a-atacar esquerdo"<<endl;    
    cout<<"x-sair"<<endl;
    cin>>op;
    if (op=='d')
    ferramenta.atacar(mundo.bloco(+1));
    else if (op=='a')
        ferramenta.atacar(mundo.bloco(-1));
    system("pause");
    }
    cout<<"tchau!!!"<<endl;    
	return 0;
}

